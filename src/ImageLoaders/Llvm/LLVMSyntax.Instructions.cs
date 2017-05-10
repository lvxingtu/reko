﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Reko.Core.Output;

namespace Reko.ImageLoaders.LLVM
{
    public abstract class Instruction : LLVMSyntax
    {
    }

    public abstract class Terminator : Instruction
    {

    }


    public class BrInstr : Terminator
    {
        public LLVMType Type;
        public Value Cond;
        public Value IfTrue;
        public Value IfFalse;

        public override void Write(Formatter w)
        {
            w.WriteKeyword("br");
            w.Write(' ');
            if (Cond !=  null)
            {
                Type.Write(w);
                w.Write(' ');
                Cond.Write(w);
                w.Write(", ");
                w.WriteKeyword("label");
                w.Write(' ');
                IfTrue.Write(w);
                w.Write(", ");
                w.WriteKeyword("label");
                w.Write(' ');
                IfFalse.Write(w);
            }
            else
            {
                w.WriteKeyword("label");
                w.Write(' ');
                IfTrue.Write(w);
            }
        }
    }

    public class PhiInstruction : OtherInstruction
    {
        public LLVMType Type;
        public List<Tuple<Value, LocalId>> Arguments;

        public override void Write(Formatter w)
        {
            Result.Write(w);
            w.Write(" = ");
            w.WriteKeyword("phi");
            w.Write(' ');
            Type.Write(w);
            var sep = " ";
            foreach (var arg in Arguments)
            {
                w.Write(sep);
                sep = ", ";
                w.Write("[");
                w.Write(arg.Item1);
                w.Write(", ");
                w.Write(arg.Item2);
                w.Write("]");
            }
        }
    }

    public class RetInstr : Terminator
    {
        public LLVMType Type;
        public Value Value;

        public override void Write(Formatter w)
        {
            w.WriteKeyword("ret");
            w.Write(" ");
            if (this.Type == LLVMType.Void)
            {
                w.WriteKeyword("void");
            }
            else
            {
                Type.Write(w);
                w.Write(' ');
                Value.Write(w);
            }
        }
    }

    public class Alloca : MemoryInstruction
    {
        public LocalId Result;
        public LLVMType Type;
        public LLVMType ElCountType;
        public Value ElementCount;
        public int Alignment;

        public override void Write(Formatter w)
        {
            throw new NotImplementedException();
        }
    }

    public class GetElementPtr : MemoryInstruction
    {
        public LocalId Result;
        public List<Tuple<LLVMType, Value>> Indices;

        public LLVMType BaseType;
        public LLVMType PtrType;
        public Value PtrValue;

        public override void Write(Formatter w)
        {
            Result.Write(w);
            w.Write(" = ");
            w.WriteKeyword("getelementptr");
            w.Write(" ");
            BaseType.Write(w);
            w.Write(", ");
            PtrType.Write(w);
            w.Write(" ");
            PtrValue.Write(w);
            foreach (var index in Indices)
            {
                w.Write(", ");
                index.Item1.Write(w);
                w.Write(" ");
                index.Item2.Write(w);
            }
        }
    }

    public class IcmpInstruction : OtherInstruction
    {
        public LocalId Result;
        public TokenType ConditionCode;
        public LLVMType Type;
        public Value Op1;
        public Value Op2;

        public override void Write(Formatter w)
        {
            w.WriteKeyword("icmp");
            w.Write(' ');
        }
    }

    public class LLVMCall : OtherInstruction
    {
        public List<Tuple<LLVMType,Value>> Arguments;
        public LLVMType FnType;
        public Value FnPtr;

        public override void Write(Formatter w)
        {
            if (Result != null)
            {
                w.Write("%{0}", Result);
                w.Write(" = ");
            }
            w.WriteKeyword("call");
            w.Write(" ");
            FnType.Write(w);
            w.Write(" ");
            FnPtr.Write(w);
            w.Write("(");
            var sep = "";
            foreach (var arg in Arguments)
            {
                w.Write(sep);
                sep = ", ";
                arg.Item1.Write(w);
                w.Write(" ");
                arg.Item2.Write(w);
            }
            w.Write(")");
        }
    }

    public class Load : MemoryInstruction
    {
        public LLVMType DstType;
        public Value Dst;
        public LLVMType SrcType;
        public Value Src;
        public int Alignment;

        public override void Write(Formatter w)
        {
            Dst.Write(w);
            w.Write(" = ");
            w.WriteKeyword("load");
            w.Write(' ');
            DstType.Write(w);
            w.Write(", ");
            SrcType.Write(w);
            w.Write(' ');
            Src.Write(w);
            if (Alignment != 0)
            {
                w.Write(", ");
                w.WriteKeyword("align");
                w.Write(" {0}", Alignment);
            }
        }
    }

    public class Store : MemoryInstruction
    {
        internal int Alignment;
        internal Value Dst;
        internal LLVMType DstType;
        internal Value Src;
        internal LLVMType SrcType;

        public override void Write(Formatter w)
        {
            w.WriteKeyword("store");
            w.Write(' ');
            SrcType.Write(w);
            w.Write(' ');
            Src.Write(w);
            w.Write(", ");
            DstType.Write(w);
            w.Write(' ');
            Dst.Write(w);
            if (Alignment != 0)
            {
                w.Write(", ");
                w.WriteKeyword("align");
                w.Write(' ');
                w.Write(Alignment);
            }
        }
    }

    public class Switch : Terminator
    {
        public LLVMType Type;
        public Value Value;
        public LocalId Default;
        public List<Tuple<LLVMType, Value, LocalId>> Destinations;

        public override void Write(Formatter w)
        {
            w.WriteKeyword("switch");
            w.Write(' ');
            Type.Write(w);
            w.Write(' ');
            Value.Write(w);
            w.Write(", ");
            w.WriteKeyword("label");
            w.Write(' ');
            Default.Write(w);
            w.WriteLine(" [");
            foreach (var dest in Destinations)
            {
                w.Indent();
                dest.Item1.Write(w);
                w.Write(' ');
                dest.Item2.Write(w);
                w.Write(", ");
                w.WriteKeyword("label");
                w.Write(' ');
                dest.Item3.Write(w);
                w.WriteLine();
            }
            w.Write("]");

        }
    }


}

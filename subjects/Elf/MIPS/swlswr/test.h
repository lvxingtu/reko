// test.h
// Generated by decompiling test
// using Reko decompiler version 0.7.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (10000 Eq_60 t10000) (10A60 word32 dw10A60) (10AA4 word32 dw10AA4) (10AA8 (ptr Eq_60) ptr10AA8) (10AB0 int32 dw10AB0) (10ABC (ptr word32) ptr10ABC))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (struct "Eq_2" (104F4 ptr32 ptr104F4))
	T_2 (in ra : (ptr Eq_2))
	T_231 (in ra : (ptr Eq_2))
Eq_17: (struct "Eq_17" (104D0 ptr32 ptr104D0))
	T_17 (in ra_28 : (ptr Eq_17))
Eq_37: (struct "Eq_37" (104C0 (ptr code) ptr104C0))
	T_37 (in ra : (ptr Eq_37))
Eq_60: (struct "Eq_60" 0001 (A60 (ptr code) ptr0A60) (AF0 byte b0AF0) (AF4 word32 dw0AF4))
	T_60 (in Mem0[0x00010AA8:word32] : word32)
	T_77 (in Mem0[0x00010AA8:word32] : word32)
	T_101 (in r19_10 : (ptr Eq_60))
	T_103 (in Mem0[0x00010AA8:word32] : word32)
	T_113 (in r17_52 : (ptr Eq_60))
	T_115 (in Mem0[0x00010AA8:word32] : word32)
	T_116 (in r2_50 : (ptr Eq_60))
	T_118 (in Mem0[0x00010AA8:word32] : word32)
	T_266 (in r3_7 : (ptr Eq_60))
	T_268 (in Mem0[0x00010AA8:word32] : word32)
Eq_81: (union "Eq_81" (int32 u0) (uint32 u1))
	T_81 (in r2_12 : Eq_81)
	T_85 (in r5_10 >> 0x02 >> 0x1F : word32)
Eq_83: (union "Eq_83" (int32 u0) (uint32 u1))
	T_83 (in r5_10 >> 0x02 : word32)
Eq_119: (union "Eq_119" (int32 u0) (uint32 u1))
	T_119 (in r2_56 : Eq_119)
	T_122 (in Mem0[r17_52 + 0x00000AF4:word32] : word32)
	T_123 (in r16_58 : Eq_119)
	T_132 (in (globals->dw10AB0 - (r2_50 + 2664) >> 0x02) + -1 : word32)
	T_170 (in r16_90 : Eq_119)
	T_176 (in Mem80[r17_52 + 0x00000AF4:word32] : word32)
Eq_181: (fn void ())
	T_181 (in deregister_tm_clones : word32)
	T_182 (in signature of deregister_tm_clones : void)
Eq_188: (fn void ())
	T_188 (in register_tm_clones : word32)
	T_189 (in signature of register_tm_clones : void)
Eq_193: (fn (ptr void) ((ptr void), int32, Eq_197))
	T_193 (in memset : word32)
	T_194 (in signature of memset : void)
Eq_197: size_t
	T_197 (in num : size_t)
	T_200 (in r6_18 : word32)
	T_204 (in num : size_t)
	T_205 (in size : size_t)
	T_206 (in r4_35 : word32)
	T_207 (in r5_34 : word32)
Eq_202: (fn (ptr void) (Eq_197, Eq_197))
	T_202 (in calloc : word32)
	T_203 (in signature of calloc : void)
Eq_209: (union "Eq_209" (byte u0) (word32 u1))
	T_209 (in dwLoc14 : word32)
	T_213 (in Mem54[r2_45 + 0x00000000:word32] : word32)
	T_220 (in 0x0C : byte)
	T_223 (in Mem61[r2_45 + 0x00000000:byte] : byte)
	T_229 (in r3_52 : Eq_209)
Eq_210: (struct "Eq_210" (0 Eq_209 t0000) (1 word32 dw0001) (4 byte b0004))
	T_210 (in r2_45 : word32)
	T_228 (in r2_50 : (ptr Eq_210))
	T_230 (in r2_62 : (ptr Eq_210))
Eq_233: (fn void ((ptr Eq_2)))
	T_233 (in _init : word32)
	T_234 (in signature of _init : void)
Eq_288: (struct "Eq_288" (10084 ptr32 ptr10084))
	T_288 (in ra : (ptr Eq_288))
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ra : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (104F4 T_22 t104F4)))
T_3: (in __gmon_start__ : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: 
T_4: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_5: (in __gmon_start__ == 0x00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in true : bool)
  Class: Eq_6
  DataType: bool
  OrigDataType: bool
T_7: (in sp_12 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in r28_13 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in r25_14 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in ra_15 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in r2_16 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in None_17 : bcuiposr0)
  Class: Eq_12
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_13: (in __gmon_start__ : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in sp_25 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in r28_26 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in r25_27 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in ra_28 : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (struct (104D0 T_34 t104D0)))
T_18: (in r2_29 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in None_30 : bcuiposr0)
  Class: Eq_19
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_20: (in 0x000104F4 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in ra + 0x000104F4 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in Mem0[ra + 0x000104F4:word32] : word32)
  Class: Eq_22
  DataType: ptr32
  OrigDataType: ptr32
T_23: (in 2004 : int32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_24: (in ra->ptr104F4 + 2004 : word32)
  Class: Eq_24
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_25: (in true : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in sp_36 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in r28_37 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in r25_38 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in ra_39 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_30: (in r2_40 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in None_41 : bcuiposr0)
  Class: Eq_31
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_32: (in 0x000104D0 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in ra_28 + 0x000104D0 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in Mem0[ra_28 + 0x000104D0:word32] : word32)
  Class: Eq_34
  DataType: ptr32
  OrigDataType: ptr32
T_35: (in 2416 : int32)
  Class: Eq_35
  DataType: int32
  OrigDataType: int32
T_36: (in ra_28->ptr104D0 + 2416 : word32)
  Class: Eq_36
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_37: (in ra : (ptr Eq_37))
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (struct (104C0 T_43 t104C0)))
T_38: (in dwArg00 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in true : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in r25_23 : (ptr code))
  Class: Eq_40
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_41: (in 0x000104C0 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in ra + 0x000104C0 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in Mem0[ra + 0x000104C0:word32] : word32)
  Class: Eq_40
  DataType: (ptr code)
  OrigDataType: word32
T_44: (in sp_24 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in ra_25 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in r0_26 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in r28_27 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in r4_28 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in r5_29 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in r6_30 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in r1_31 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in r7_32 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in r8_33 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in r2_34 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in r25_35 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in r2_8 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in 0x00010AA4 : word32)
  Class: Eq_57
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_58: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_59: (in 0x00010AA8 : word32)
  Class: Eq_59
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (struct (0 T_60 t0000)))
T_60: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_61: (in 2692 : int32)
  Class: Eq_61
  DataType: int32
  OrigDataType: int32
T_62: (in Mem0[0x00010AA8:word32] + 2692 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_63: (in r2_8 == globals->ptr10AA8 + 2692 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in __gmon_start__ : word32)
  Class: Eq_64
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_65: (in 0x00000000 : word32)
  Class: Eq_64
  DataType: (ptr code)
  OrigDataType: word32
T_66: (in __gmon_start__ == null : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in sp_19 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in r28_20 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in r25_21 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in r4_22 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in r2_23 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in ra_24 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in r5_10 : int32)
  Class: Eq_73
  DataType: int32
  OrigDataType: int32
T_74: (in 0x00010AA4 : word32)
  Class: Eq_74
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_75 t0000)))
T_75: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_76: (in 0x00010AA8 : word32)
  Class: Eq_76
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (struct (0 T_77 t0000)))
T_77: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_78: (in 2692 : int32)
  Class: Eq_78
  DataType: int32
  OrigDataType: int32
T_79: (in Mem0[0x00010AA8:word32] + 2692 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in globals->dw10AA4 - (globals->ptr10AA8 + 2692) : word32)
  Class: Eq_73
  DataType: int32
  OrigDataType: word32
T_81: (in r2_12 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: (union (int32 u1) (uint32 u0))
T_82: (in 0x02 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in r5_10 >> 0x02 : word32)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: (union (int32 u0) (uint32 u1))
T_84: (in 0x1F : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in r5_10 >> 0x02 >> 0x1F : word32)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: uint32
T_86: (in r5_10 >> 0x02 : word32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_87: (in r2_12 + (r5_10 >> 0x02) : word32)
  Class: Eq_87
  DataType: int32
  OrigDataType: int32
T_88: (in 0x01 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in (word32) r2_12 + (r5_10 >> 0x02) >> 0x01 : word32)
  Class: Eq_89
  DataType: int32
  OrigDataType: int32
T_90: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: int32
  OrigDataType: word32
T_91: (in (word32) r2_12 + (r5_10 >> 0x02) >> 0x01 == 0x00000000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in __gmon_start__ : word32)
  Class: Eq_92
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_93: (in 0x00000000 : word32)
  Class: Eq_92
  DataType: (ptr code)
  OrigDataType: word32
T_94: (in __gmon_start__ == null : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in sp_23 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in r28_24 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in r25_25 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in r4_26 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in r5_27 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in r2_28 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in r19_10 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (struct (AF0 T_106 t0AF0)))
T_102: (in 0x00010AA8 : word32)
  Class: Eq_102
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (struct (0 T_103 t0000)))
T_103: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_104: (in 0x00000AF0 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in r19_10 + 0x00000AF0 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in Mem0[r19_10 + 0x00000AF0:byte] : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in (word32) r19_10[2800] : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in 0x00000000 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_109: (in (word32) r19_10[2800] != 0x00000000 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in __gmon_start__ : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: 
T_111: (in 0x00000000 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_112: (in __gmon_start__ == 0x00000000 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in r17_52 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (struct 0001 (AF4 word32 dw0AF4)))
T_114: (in 0x00010AA8 : word32)
  Class: Eq_114
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (struct (0 T_115 t0000)))
T_115: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_116: (in r2_50 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: int32
T_117: (in 0x00010AA8 : word32)
  Class: Eq_117
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (struct (0 T_118 t0000)))
T_118: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_119: (in r2_56 : Eq_119)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: (struct "Eq_60" 0001 (A60 (ptr code) ptr0A60) (AF0 byte b0AF0) (AF4 word32 dw0AF4))
T_120: (in 0x00000AF4 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in r17_52 + 0x00000AF4 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in Mem0[r17_52 + 0x00000AF4:word32] : word32)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: word32
T_123: (in r16_58 : Eq_119)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: (union (int32 u0) (uint32 u1))
T_124: (in 0x00010AB0 : word32)
  Class: Eq_124
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_125 t0000)))
T_125: (in Mem0[0x00010AB0:word32] : word32)
  Class: Eq_125
  DataType: int32
  OrigDataType: int32
T_126: (in 2664 : int32)
  Class: Eq_126
  DataType: int32
  OrigDataType: int32
T_127: (in r2_50 + 2664 : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_128: (in globals->dw10AB0 - (r2_50 + 2664) : word32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_129: (in 0x02 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in globals->dw10AB0 - (r2_50 + 2664) >> 0x02 : word32)
  Class: Eq_130
  DataType: int32
  OrigDataType: int32
T_131: (in -1 : int32)
  Class: Eq_131
  DataType: int32
  OrigDataType: int32
T_132: (in (globals->dw10AB0 - (r2_50 + 2664) >> 0x02) + -1 : word32)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: int32
T_133: (in r18_54 : int32)
  Class: Eq_133
  DataType: int32
  OrigDataType: int32
T_134: (in 2664 : int32)
  Class: Eq_134
  DataType: int32
  OrigDataType: int32
T_135: (in r2_50 + 2664 : word32)
  Class: Eq_133
  DataType: int32
  OrigDataType: int32
T_136: (in r2_56 < r16_58 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in (word32) (r2_56 < r16_58) : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_139: (in (word32) (r2_56 < r16_58) == 0x00000000 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in sp_104 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in r28_105 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in r25_106 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in ra_108 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in r18_109 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in r17_110 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in r16_111 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in r2_112 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in r4_113 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in r3_114 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in __gmon_start__ : word32)
  Class: Eq_150
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_151: (in true : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in r2_78 : int32)
  Class: Eq_152
  DataType: int32
  OrigDataType: int32
T_153: (in 1 : int32)
  Class: Eq_153
  DataType: int32
  OrigDataType: int32
T_154: (in r2_56 + 1 : word32)
  Class: Eq_152
  DataType: int32
  OrigDataType: int32
T_155: (in 0x00000AF4 : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in r17_52 + 0x00000AF4 : word32)
  Class: Eq_156
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_157: (in Mem80[r17_52 + 0x00000AF4:word32] : word32)
  Class: Eq_152
  DataType: int32
  OrigDataType: word32
T_158: (in r2_81 : (ptr (ptr code)))
  Class: Eq_158
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_165 t0000)))
T_159: (in 0x02 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in r2_78 << 0x02 : word32)
  Class: Eq_160
  DataType: ui32
  OrigDataType: ui32
T_161: (in r18_54 + (r2_78 << 0x02) : word32)
  Class: Eq_158
  DataType: (ptr (ptr code))
  OrigDataType: ui32
T_162: (in r25_82 : (ptr code))
  Class: Eq_162
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_163: (in 0x00000000 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in r2_81 + 0x00000000 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in Mem80[r2_81 + 0x00000000:word32] : word32)
  Class: Eq_162
  DataType: (ptr code)
  OrigDataType: word32
T_166: (in sp_83 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in r28_84 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in r25_85 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in ra_87 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in r16_90 : Eq_119)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: uint32
T_171: (in r2_91 : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in r4_92 : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_173: (in r3_93 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in 0x00000AF4 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in r17_52 + 0x00000AF4 : word32)
  Class: Eq_175
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_176: (in Mem80[r17_52 + 0x00000AF4:word32] : word32)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: word32
T_177: (in r2_56 < r16_90 : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in (word32) (r2_56 < r16_90) : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_180: (in (word32) (r2_56 < r16_90) != 0x00000000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in deregister_tm_clones : word32)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (fn T_183 ()))
T_182: (in signature of deregister_tm_clones : void)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: 
T_183: (in deregister_tm_clones() : void)
  Class: Eq_183
  DataType: void
  OrigDataType: void
T_184: (in 0x01 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_185: (in 0x00000AF0 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in r19_10 + 0x00000AF0 : word32)
  Class: Eq_186
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_187: (in Mem73[r19_10 + 0x00000AF0:byte] : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_188: (in register_tm_clones : word32)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: (ptr (fn T_190 ()))
T_189: (in signature of register_tm_clones : void)
  Class: Eq_188
  DataType: (ptr Eq_188)
  OrigDataType: 
T_190: (in register_tm_clones() : void)
  Class: Eq_190
  DataType: void
  OrigDataType: void
T_191: (in dwArg00 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in dwArg04 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in memset : word32)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: (ptr (fn T_201 (T_198, T_199, T_200)))
T_194: (in signature of memset : void)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: 
T_195: (in r4 : (ptr void))
  Class: Eq_195
  DataType: (ptr void)
  OrigDataType: 
T_196: (in value : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: 
T_197: (in num : size_t)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: 
T_198: (in r4_20 : word32)
  Class: Eq_195
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_199: (in r5_19 : word32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_200: (in r6_18 : word32)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: size_t
T_201: (in memset(r4_20, r5_19, r6_18) : (ptr void))
  Class: Eq_201
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_202: (in calloc : word32)
  Class: Eq_202
  DataType: (ptr Eq_202)
  OrigDataType: (ptr (fn T_208 (T_206, T_207)))
T_203: (in signature of calloc : void)
  Class: Eq_202
  DataType: (ptr Eq_202)
  OrigDataType: 
T_204: (in num : size_t)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: 
T_205: (in size : size_t)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: 
T_206: (in r4_35 : word32)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: size_t
T_207: (in r5_34 : word32)
  Class: Eq_197
  DataType: Eq_197
  OrigDataType: size_t
T_208: (in calloc(r4_35, r5_34) : (ptr void))
  Class: Eq_208
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_209: (in dwLoc14 : word32)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: word32
T_210: (in r2_45 : word32)
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: (ptr (struct (0 T_209 t0000) (1 T_227 t0001) (4 T_219 t0004)))
T_211: (in 0x00000000 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in r2_45 + 0x00000000 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in Mem54[r2_45 + 0x00000000:word32] : word32)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: word32
T_214: (in bLoc10 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in (word32) bLoc10 : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in (byte) (word32) bLoc10 : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in 0x00000004 : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in r2_45 + 0x00000004 : word32)
  Class: Eq_218
  DataType: ptr32
  OrigDataType: ptr32
T_219: (in Mem58[r2_45 + 0x00000004:byte] : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_220: (in 0x0C : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_221: (in 0x00000000 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in r2_45 + 0x00000000 : word32)
  Class: Eq_222
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_223: (in Mem61[r2_45 + 0x00000000:byte] : byte)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: byte
T_224: (in 0x00000000 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in 0x00000001 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in r2_45 + 0x00000001 : word32)
  Class: Eq_226
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_227: (in Mem63[r2_45 + 0x00000001:word32] : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_228: (in r2_50 : (ptr Eq_210))
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: (ptr (struct (0 T_209 t0000) (1 T_227 t0001) (4 T_219 t0004)))
T_229: (in r3_52 : Eq_209)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: word32
T_230: (in r2_62 : (ptr Eq_210))
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: (ptr (struct (0 T_209 t0000) (1 T_227 t0001) (4 T_219 t0004)))
T_231: (in ra : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: word32
T_232: (in true : bool)
  Class: Eq_232
  DataType: bool
  OrigDataType: bool
T_233: (in _init : word32)
  Class: Eq_233
  DataType: (ptr Eq_233)
  OrigDataType: (ptr (fn T_235 (T_231)))
T_234: (in signature of _init : void)
  Class: Eq_233
  DataType: (ptr Eq_233)
  OrigDataType: 
T_235: (in _init(ra) : void)
  Class: Eq_235
  DataType: void
  OrigDataType: void
T_236: (in r16_45 : (ptr word32))
  Class: Eq_236
  DataType: (ptr word32)
  OrigDataType: (ptr (struct 0004 (0 word32 dw0000)))
T_237: (in 0x00010ABC : word32)
  Class: Eq_237
  DataType: (ptr (ptr word32))
  OrigDataType: (ptr (struct (0 T_238 t0000)))
T_238: (in Mem0[0x00010ABC:word32] : word32)
  Class: Eq_236
  DataType: (ptr word32)
  OrigDataType: word32
T_239: (in 0x00010ABC : word32)
  Class: Eq_239
  DataType: (ptr (ptr word32))
  OrigDataType: (ptr (struct (0 T_240 t0000)))
T_240: (in Mem0[0x00010ABC:word32] : word32)
  Class: Eq_236
  DataType: (ptr word32)
  OrigDataType: int32
T_241: (in globals->ptr10ABC - r16_45 : word32)
  Class: Eq_241
  DataType: int32
  OrigDataType: int32
T_242: (in 0x02 : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in globals->ptr10ABC - r16_45 >> 0x02 : word32)
  Class: Eq_243
  DataType: int32
  OrigDataType: int32
T_244: (in 0x00000000 : word32)
  Class: Eq_243
  DataType: int32
  OrigDataType: word32
T_245: (in globals->ptr10ABC - r16_45 >> 0x02 == 0x00000000 : bool)
  Class: Eq_245
  DataType: bool
  OrigDataType: bool
T_246: (in r25_68 : (ptr code))
  Class: Eq_246
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_247: (in 0x00000000 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in r16_45 + 0x00000000 : word32)
  Class: Eq_248
  DataType: word32
  OrigDataType: word32
T_249: (in Mem0[r16_45 + 0x00000000:word32] : word32)
  Class: Eq_246
  DataType: (ptr code)
  OrigDataType: word32
T_250: (in sp_73 : word32)
  Class: Eq_250
  DataType: word32
  OrigDataType: word32
T_251: (in r28_74 : word32)
  Class: Eq_251
  DataType: word32
  OrigDataType: word32
T_252: (in r25_75 : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in r21_76 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in r6_77 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in r20_78 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in r5_79 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in r19_80 : word32)
  Class: Eq_257
  DataType: word32
  OrigDataType: word32
T_258: (in r4_81 : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in r18_82 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in r16_83 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in ra_84 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in r17_85 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_263: (in r18_82 != r17_85 : bool)
  Class: Eq_263
  DataType: bool
  OrigDataType: bool
T_264: (in 4 : int32)
  Class: Eq_264
  DataType: int32
  OrigDataType: int32
T_265: (in r16_83 + 4 : word32)
  Class: Eq_236
  DataType: (ptr word32)
  OrigDataType: word32
T_266: (in r3_7 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (struct (A60 T_272 t0A60)))
T_267: (in 0x00010AA8 : word32)
  Class: Eq_267
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (struct (0 T_268 t0000)))
T_268: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_269: (in r25_17 : (ptr code))
  Class: Eq_269
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_270: (in 0x00000A60 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in r3_7 + 0x00000A60 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_272: (in Mem0[r3_7 + 0x00000A60:word32] : word32)
  Class: Eq_269
  DataType: (ptr code)
  OrigDataType: word32
T_273: (in -1 : int32)
  Class: Eq_269
  DataType: (ptr code)
  OrigDataType: int32
T_274: (in r25_17 == (<anonymous> *) -1 : bool)
  Class: Eq_274
  DataType: bool
  OrigDataType: bool
T_275: (in sp_30 : word32)
  Class: Eq_275
  DataType: word32
  OrigDataType: word32
T_276: (in r28_31 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in r25_32 : word32)
  Class: Eq_277
  DataType: word32
  OrigDataType: word32
T_278: (in r3_33 : word32)
  Class: Eq_278
  DataType: word32
  OrigDataType: word32
T_279: (in r2_34 : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in ra_35 : word32)
  Class: Eq_280
  DataType: word32
  OrigDataType: word32
T_281: (in r17_36 : word32)
  Class: Eq_281
  DataType: word32
  OrigDataType: word32
T_282: (in r16_37 : (ptr int32))
  Class: Eq_282
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_285 t0000)))
T_283: (in 0x00000000 : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in r16_37 + 0x00000000 : word32)
  Class: Eq_284
  DataType: word32
  OrigDataType: word32
T_285: (in Mem0[r16_37 + 0x00000000:word32] : word32)
  Class: Eq_285
  DataType: int32
  OrigDataType: word32
T_286: (in -1 : int32)
  Class: Eq_285
  DataType: int32
  OrigDataType: int32
T_287: (in *r16_37 != -1 : bool)
  Class: Eq_287
  DataType: bool
  OrigDataType: bool
T_288: (in ra : (ptr Eq_288))
  Class: Eq_288
  DataType: (ptr Eq_288)
  OrigDataType: (ptr (struct (10084 T_297 t10084)))
T_289: (in true : bool)
  Class: Eq_289
  DataType: bool
  OrigDataType: bool
T_290: (in sp_16 : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_291: (in r28_17 : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in r25_18 : word32)
  Class: Eq_292
  DataType: word32
  OrigDataType: word32
T_293: (in ra_19 : word32)
  Class: Eq_293
  DataType: word32
  OrigDataType: word32
T_294: (in None_20 : bcuiposr0)
  Class: Eq_294
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_295: (in 0x00010084 : word32)
  Class: Eq_295
  DataType: word32
  OrigDataType: word32
T_296: (in ra + 0x00010084 : word32)
  Class: Eq_296
  DataType: word32
  OrigDataType: word32
T_297: (in Mem0[ra + 0x00010084:word32] : word32)
  Class: Eq_297
  DataType: ptr32
  OrigDataType: ptr32
T_298: (in 1780 : int32)
  Class: Eq_298
  DataType: int32
  OrigDataType: int32
T_299: (in ra->ptr10084 + 1780 : word32)
  Class: Eq_299
  DataType: (ptr code)
  OrigDataType: (ptr code)
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	Eq_60 t10000;	// 10000
	word32 dw10A60;	// 10A60
	word32 dw10AA4;	// 10AA4
	struct Eq_60 * ptr10AA8;	// 10AA8
	int32 dw10AB0;	// 10AB0
	word32 * ptr10ABC;	// 10ABC
} Eq_1;

typedef struct Eq_2 {
	ptr32 ptr104F4;	// 104F4
} Eq_2;

typedef struct Eq_17 {
	ptr32 ptr104D0;	// 104D0
} Eq_17;

typedef struct Eq_37 {
	<anonymous> * ptr104C0;	// 104C0
} Eq_37;

typedef struct Eq_60 {	// size: 1 1
	<anonymous> * ptr0A60;	// A60
	byte b0AF0;	// AF0
	word32 dw0AF4;	// AF4
} Eq_60;

typedef union Eq_81 {
	int32 u0;
	uint32 u1;
} Eq_81;

typedef union Eq_83 {
	int32 u0;
	uint32 u1;
} Eq_83;

typedef union Eq_119 {
	int32 u0;
	uint32 u1;
} Eq_119;

typedef void (Eq_181)();

typedef void (Eq_188)();

typedef void (Eq_193)(void, int32, size_t);

typedef size_t Eq_197;

typedef void (Eq_202)(size_t, size_t);

typedef union Eq_209 {
	byte u0;
	word32 u1;
} Eq_209;

typedef struct Eq_210 {
	Eq_209 t0000;	// 0
	word32 dw0001;	// 1
	byte b0004;	// 4
} Eq_210;

typedef void (Eq_233)(Eq_2 *);

typedef struct Eq_288 {
	ptr32 ptr10084;	// 10084
} Eq_288;

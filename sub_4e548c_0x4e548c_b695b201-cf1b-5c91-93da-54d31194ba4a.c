// ============================================================
// 函数名称: sub_4e548c
// 虚拟地址: 0x4e548c
// WARP GUID: b695b201-cf1b-5c91-93da-54d31194ba4a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52a8cc, sub_51d12c, sub_51b5c0, sub_4040c4, sub_4cbd28, sub_519804, sub_4030a0, sub_516d6c, sub_52abe4, sub_403df8, sub_52add4, sub_4b8ae4, sub_4cfedc, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4e548c(void* arg1)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD* ebp
    struct _EXCEPTION_REGISTRATION_RECORD* ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0xce0) = 0
    *(arg1 + 0xce1) = 0
    *(data_61c8c8 + 0xa95) = 1
    int32_t ecx
    
    if (data_780c58 == 0)
        int32_t edx
        edx.b = 1
        void* eax
        eax, ecx = sub_4030a0(ecx, edx)
        data_780c58 = eax
    
    *(data_780c58 + 0x25b40) = 7
    data_780c58[1].b = 7
    int32_t* edx_2
    
    if (data_780c60 == 0)
        edx_2.b = 1
        int32_t* eax_2
        eax_2, ecx, edx_2 = sub_51d12c(sub_51849c+0xb8, edx_2)
        data_780c60 = eax_2
    
    if (data_780c64 == 0)
        edx_2.b = 1
        int32_t* eax_3
        eax_3, ecx, edx_2 = sub_51d12c(sub_51849c+0xb8, edx_2)
        data_780c64 = eax_3
    
    if (data_780c68 == 0)
        edx_2.b = 1
        int32_t eax_5
        eax_5, ecx, edx_2 = sub_4030a0(ecx, edx_2)
        data_780c68 = eax_5
    
    if (data_780da4 == 0)
        edx_2.b = 1
        void* eax_7
        eax_7, ecx, edx_2 = sub_519804(ecx, edx_2, 0x7a6d0c, arg1)
        esp_1 = &var_4
        data_780da4 = eax_7
    
    if (data_780c5c == 0)
        edx_2.b = 1
        void* eax_8
        eax_8, ecx, edx_2 = sub_51b5c0(0x518464, edx_2)
        data_780c5c = eax_8
    
    if (*data_53067c == 0)
        edx_2.b = 1
        int32_t* eax_10
        eax_10, ecx = sub_4cfedc(0x4c9ff4, edx_2)
        *data_53067c = eax_10
    
    if (data_780db0 == 0)
        edx_2.b = 1
        data_780db0 = sub_4030a0(ecx, edx_2)
    
    sub_52add4(data_780db0)
    int32_t ecx_1
    int32_t edx_3
    void* ebp_1
    ecx_1, edx_3, ebp_1 = sub_4cbd28(*(data_61c8c8 + 0xa64))
    
    if (data_780db4 == 0)
        edx_3.b = 1
        int32_t eax_17
        eax_17, ecx_1, edx_3 = sub_4030a0(ecx_1, edx_3)
        data_780db4 = eax_17
    
    sub_52abe4(data_780db4, edx_3, ecx_1)
    sub_4040c4(ebp_1 - 4, *(data_61c8c8 + 0xa64), "\data\sim.txt")
    int32_t edx_6
    void* ebp_2
    edx_6, ebp_2 = sub_52a8cc(data_780db4, *(ebp_1 - 4))
    
    if (data_61c9f0 == 0)
        edx_6.b = 1
        int32_t* eax_22
        eax_22, edx_6 = sub_516d6c(sub_50d118+0xa8, edx_6)
        data_61c9f0 = eax_22
    
    if (data_61c9f4 == 0)
        edx_6.b = 1
        data_61c9f4 = sub_516d6c(sub_50d118+0xa8, edx_6)
    
    if (*(data_61c8c8 + 0x133a) == 0)
        void* eax_25 = data_61c8c8
        *(eax_25 + 0x133c) = arg1
        *(eax_25 + 0x1338) = sub_4d6ac0
    
    *(data_61c9f4 + 0x347) = 1
    *(esp_1 - 4) = 1
    sub_4040c4(ebp_2 - 8, *(data_61c8c8 + 0xa64), "\data\brain.txt")
    int32_t edx_8
    edx_8.b = 1
    *data_530380 = sub_4b8ae4(0x4b7048, edx_8, *(ebp_2 - 8))
    sub_403df8(&data_780da8)
    data_7a6e74 = 0
    data_7a6df4 = 0x38
    data_7a6df8 = 0x15
    *(esp_1 - 8) = 0x7a6d0c
    data_7a6aa4 = 0x73654a07
    data_7a6aa8.d = data_4e5bb4.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6aaf = 0x72615305
    data_7a6ab3.w = data_4e5bbc.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6aba = 0x63694e06
    void* edi_6 = &data_7a6abe
    void* const esi_7 = &data_4e5bc4
    *edi_6 = *esi_7
    *(edi_6 + 2) = *(esi_7 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6ac5 = 0x696c4105
    data_7a6ac9.w = data_4e5bcc.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6ad0 = 0x74614e07
    data_7a6ad4.d = data_4e5bd4.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6adb = 0x6e615607
    data_7a6adf.d = *"essa\tChristina"
    *(esp_1 - 8) = *(esp_1 - 8)
    __builtin_strncpy(&data_7a6ae6, "\tChr", 4)
    void* edi_15 = &data_7a6aea
    void* const esi_20 = "istina"
    *edi_15 = *esi_20
    *(edi_15 + 4) = *(esi_20 + 4)
    *(esp_1 - 8) = *(esp_1 - 8)
    __builtin_strncpy(&data_7a6af1, "\tJaq", 4)
    void* edi_18 = &data_7a6af5
    void* const esi_24 = "ueline"
    *edi_18 = *esi_24
    *(edi_18 + 4) = *(esi_24 + 4)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6afc = 0x72614c04
    data_7a6b00.b = data_4e5bfc.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b07 = 0x6c754a05
    data_7a6b0b.w = data_4e5c04.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b12 = 0x6e654c04
    data_7a6b16.b = data_4e5c0c.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b1d = 0x746e4107
    data_7a6b21.d = data_4e5c14.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b28 = 0x6c654306
    void* edi_29 = &data_7a6b2c
    void* const esi_40 = &data_4e5c1c
    *edi_29 = *esi_40
    *(edi_29 + 2) = *(esi_40 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b33 = 0x73694c04
    data_7a6b37.b = data_4e5c24.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b3e = 0x72655406
    void* edi_34 = &data_7a6b42
    void* const esi_47 = &data_4e5c2c
    *edi_34 = *esi_47
    *(edi_34 + 2) = *(esi_47 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b49 = 0x6e615306
    void* edi_37 = &data_7a6b4d
    void* const esi_51 = &data_4e5c34
    *edi_37 = *esi_51
    *(edi_37 + 2) = *(esi_51 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b54 = 0x726f4e04
    data_7a6b58.b = data_4e5c3c.b
    *(esp_1 - 8) = *(esp_1 - 8)
    __builtin_strncpy(&data_7a6b5f, "\tAna", 4)
    void* edi_42 = &data_7a6b63
    void* const esi_58 = "stasia"
    *edi_42 = *esi_58
    *(edi_42 + 4) = *(esi_58 + 4)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b6a = 0x6e6e4104
    data_7a6b6e.b = data_4e5c50.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b75 = 0x6d6d4504
    data_7a6b79.b = data_4e5c58.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b80 = 0x6e615405
    data_7a6b84.w = data_4e5c60.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b8b = 0x64614e06
    void* edi_51 = &data_7a6b8f
    void* const esi_71 = &data_4e5c68
    *edi_51 = *esi_71
    *(edi_51 + 2) = *(esi_71 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6b96 = 0x64614e05
    data_7a6b9a.w = data_4e5c70.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6ba1 = 0x75614c05
    data_7a6ba5.w = data_4e5c78.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6bac = 0x616c4307
    data_7a6bb0.d = data_4e5c80.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6bb7 = 0x64614a04
    data_7a6bbb.b = data_4e5c88.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6bc2 = 0x696c4105
    data_7a6bc6.w = data_4e5c90.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6bcd = 0x72614306
    void* edi_64 = &data_7a6bd1
    void* const esi_90 = &data_4e5c98
    *edi_64 = *esi_90
    *(edi_64 + 2) = *(esi_90 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6bd8 = 0x74614b04
    data_7a6bdc.b = data_4e5ca0.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6be3 = 0x63754c04
    data_7a6be7.b = data_4e5ca8.b
    int32_t esi_99 = *(esp_1 - 8)
    data_7a6bee = 0x6e614a03
    *(esp_1 - 8) = esi_99
    data_7a6bf9 = 0x76614405
    data_7a6bfd.w = data_4e5cb0.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c04 = 0x6c694e04
    data_7a6c08.b = data_4e5cb8.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c0f = 0x76654b05
    data_7a6c13.w = data_4e5cc0.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c1a = 0x6d6f5205
    data_7a6c1e.w = data_4e5cc8.w
    *(esp_1 - 8) = *(esp_1 - 8)
    __builtin_strncpy(&data_7a6c25, "\tFri", 4)
    void* edi_79 = &data_7a6c29
    void* const esi_112 = "edrich"
    *edi_79 = *esi_112
    *(edi_79 + 4) = *(esi_112 + 4)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c30 = 0x6e6f4b06
    void* edi_82 = &data_7a6c34
    void* const esi_116 = &data_4e5cdc
    *edi_82 = *esi_116
    *(edi_82 + 2) = *(esi_116 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c3b = 0x63695207
    data_7a6c3f.d = data_4e5ce4.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c46 = 0x61724605
    data_7a6c4a.w = data_4e5cec.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c51 = 0x6e614406
    void* edi_89 = &data_7a6c55
    void* const esi_126 = &data_4e5cf4
    *edi_89 = *esi_126
    *(edi_89 + 2) = *(esi_126 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    __builtin_strncpy(&data_7a6bee, "\tAle", 4)
    void* edi_92 = &data_7a6bf2
    void* const esi_130 = "xander"
    *edi_92 = *esi_130
    *(edi_92 + 4) = *(esi_130 + 4)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c5c = 0x686f4a04
    data_7a6c60.b = data_4e5d08.b
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c67 = 0x6d614a05
    data_7a6c6b.w = data_4e5d10.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c72 = 0x6c695707
    data_7a6c76.d = data_4e5d18.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c7d = 0x63694d07
    data_7a6c81.d = *"hael\tChristian"
    *(esp_1 - 8) = *(esp_1 - 8)
    __builtin_strncpy(&data_7a6c88, "\tChr", 4)
    void* edi_103 = &data_7a6c8c
    void* const esi_146 = "istian"
    *edi_103 = *esi_146
    *(edi_103 + 4) = *(esi_146 + 4)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c93 = 0x74655005
    data_7a6c97.w = data_4e5d34.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6c9e = 0x63614a04
    data_7a6ca2.b = data_4e5d3c.b
    int32_t esi_155 = *(esp_1 - 8)
    data_7a6ca9 = 0x6f654c03
    *(esp_1 - 8) = esi_155
    data_7a6cb4 = 0x72644106
    void* edi_110 = &data_7a6cb8
    void* const esi_156 = &data_4e5d44
    *edi_110 = *esi_156
    *(edi_110 + 2) = *(esi_156 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6cbf = 0x6f6c4607
    data_7a6cc3.d = data_4e5d4c.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6cca = 0x6c654605
    data_7a6cce.w = data_4e5d54.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6cd5 = 0x62614707
    data_7a6cd9.d = data_4e5d5c.d
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6ce0 = 0x6b754c05
    data_7a6ce4.w = data_4e5d64.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6ceb = 0x73754a06
    void* edi_121 = &data_7a6cef
    void* const esi_172 = &data_4e5d6c
    *edi_121 = *esi_172
    *(edi_121 + 2) = *(esi_172 + 2)
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6cf6 = 0x72614d05
    data_7a6cfa.w = data_4e5d74.w
    *(esp_1 - 8) = *(esp_1 - 8)
    data_7a6d01 = 0x6f685406
    void* edi_126 = &data_7a6d05
    void* const esi_179 = &data_4e5d7c
    *edi_126 = *esi_179
    *(edi_126 + 2) = *(esi_179 + 2)
    int32_t* esi_182 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_182
    *esi_182 = 0x646e4106
    void* edi_130 = &esi_182[1]
    void* const esi_183 = &data_4e5d84
    *edi_130 = *esi_183
    *(edi_130 + 2) = *(esi_183 + 2)
    void* esi_186 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_186
    *(esi_186 + 0xb) = 0x726f4208
    void* edi_134 = esi_186 + 0xf
    void* const esi_187 = "owski"
    *edi_134 = *esi_187
    *(edi_134 + 4) = *(esi_187 + 4)
    void* esi_190 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_190
    *(esi_190 + 0x16) = 0x696c4305
    *(esi_190 + 0x1a) = data_4e5d98.w
    void* esi_193 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_193
    *(esi_193 + 0x21) = 0x6e754406
    void* edi_141 = esi_193 + 0x25
    void* const esi_194 = &data_4e5da0
    *edi_141 = *esi_194
    *(edi_141 + 2) = *(esi_194 + 2)
    void* esi_197 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_197
    *(esi_197 + 0x2c) = 0x6e724505
    *(esi_197 + 0x30) = data_4e5da8.w
    void* esi_200 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_200
    *(esi_200 + 0x37) = 0x65724607
    *(esi_200 + 0x3b) = data_4e5db0.d
    void* esi_203 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_203
    *(esi_203 + 0x42) = 0x6c6f4708
    void* edi_151 = esi_203 + 0x46
    void* const esi_204 = "dmann"
    *edi_151 = *esi_204
    *(edi_151 + 4) = *(esi_204 + 4)
    void* esi_207 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_207
    *(esi_207 + 0x4d) = 0x72654808
    void* edi_155 = esi_207 + 0x51
    void* const esi_208 = "rlich"
    *edi_155 = *esi_208
    *(edi_155 + 4) = *(esi_208 + 4)
    void* esi_211 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_211
    *(esi_211 + 0x58) = 0x686f4b04
    *(esi_211 + 0x5c) = data_4e5dd0.b
    void* esi_214 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_214
    *(esi_214 + 0x63) = 0x73754c04
    *(esi_214 + 0x67) = data_4e5dd8.b
    void* esi_217 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_217
    *(esi_217 + 0x6e) = 0x69654d05
    *(esi_217 + 0x72) = data_4e5de0.w
    void* esi_220 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_220
    *(esi_220 + 0x79) = 0x746f4e08
    void* edi_168 = esi_220 + 0x7d
    void* const esi_221 = "durft"
    *edi_168 = *esi_221
    *(edi_168 + 4) = *(esi_221 + 4)
    void* esi_224 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_224
    __builtin_strncpy(esi_224 + 0x84, "\tOst", 4)
    int32_t* edi_172 = esi_224 + 0x88
    void* const esi_225 = "ermann"
    *edi_172 = *esi_225
    edi_172[1].w = *(esi_225 + 4)
    void* esi_228 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_228
    *(esi_228 + 0x8f) = 0x656c5005
    *(esi_228 + 0x93) = data_4e5e00.w
    void* esi_231 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_231
    *(esi_231 + 0x9a) = 0x65695207
    *(esi_231 + 0x9e) = data_4e5e08.d
    void* esi_234 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_234
    *(esi_234 + 0xa5) = 0x65745307
    *(esi_234 + 0xa9) = data_4e5e10.d
    void* esi_237 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_237
    *(esi_237 + 0xb0) = 0x6e655406
    void* edi_185 = esi_237 + 0xb4
    void* const esi_238 = &data_4e5e18
    *edi_185 = *esi_238
    *(edi_185 + 2) = *(esi_238 + 2)
    void* esi_241 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_241
    *(esi_241 + 0xbb) = 0x676e5505
    *(esi_241 + 0xbf) = data_4e5e20.w
    void* esi_244 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_244
    *(esi_244 + 0xc6) = 0x736f5604
    *(esi_244 + 0xca) = data_4e5e28.b
    void* esi_247 = *(esp_1 - 8)
    *(esp_1 - 8) = esi_247
    *(esi_247 + 0xd1) = 0x72655706
    void* edi_195 = esi_247 + 0xd5
    void* const esi_248 = &data_4e5e30
    *edi_195 = *esi_248
    *(edi_195 + 2) = *(esi_248 + 2)
    void* esi_251 = *(esp_1 - 8)
    *(esi_251 + 0xdc) = 0x62615a05
    *(esi_251 + 0xe0) = data_4e5e38.w
    esp_1[1]
    fsbase->NtTib.ExceptionList = *(esp_1 - 4)
    esp_1[1] = sub_4e5b76
    return sub_403e1c(ebp_2 - 8, 2)
}

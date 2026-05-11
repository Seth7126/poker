// ============================================================
// 函数名称: sub_4260a0
// 虚拟地址: 0x4260a0
// WARP GUID: 0a93257c-f4a9-5535-b11e-5ec1b401e724
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetClipBox
// [内部子函数调用]: sub_40faac, sub_425c9c, sub_4318d0
// [被调用的父级函数]: sub_426204
// ============================================================

int32_tsub_4260a0(void* arg1)
{
    // 第一条实际指令: int32_t* edi_1 = arg1 - 4
    int32_t* edi_1 = arg1 - 4
    int32_t var_1c = 0xbc2b
    int32_t var_5c
    int32_t* var_14 = &var_5c
    int32_t var_18 = sub_4318d0(*edi_1)
    var_5c = 2
    int32_t var_50 = 1
    int32_t var_4c = 0
    int32_t var_44 = *(*(arg1 - 8) + 4)
    int32_t var_58 = sub_4318d0(*edi_1)
    int32_t var_48 = sub_4318d0(*edi_1)
    int32_t var_2c = 0xbc2c
    int32_t var_28 = sub_4318d0(*edi_1)
    int32_t var_74
    int32_t* var_24 = &var_74
    var_74 = 2
    int32_t var_70 = sub_4318d0(*edi_1)
    void* lprect_1 = nullptr
    LRESULT ebx = sub_425c9c(*edi_1)
    void var_84
    void* lprect = &var_84
    GetClipBox(*(*(arg1 - 8) + 4), lprect)
    int32_t eax_19 = *(*edi_1 + 0x3c)
    int32_t result = *(*edi_1 + 0x38)
    int32_t result_1 = result
    
    if (0 s< eax_19)
        do
            LRESULT var_6c_1 = ebx
            int32_t var_60
            
            if (ebx s< (*(**(*edi_1 + 0x1f0) + 0x14))())
                var_60 = (*(**(*edi_1 + 0x1f0) + 0x18))()
            
            void* eax_29 = *(*edi_1 + 0x200)
            int32_t var_30_1 = var_60
            LRESULT var_54_1 = ebx
            (*(**edi_1 - 0x14))()
            lprect = eax_29 + lprect_1
            void var_94
            sub_40faac(result_1, lprect_1, 0, &var_94, lprect)
            lprect = lprect_1
            void var_40
            __builtin_memcpy(&var_40, &var_94, 0x10)
            void* lprect_2 = lprect
            (*(**edi_1 - 0x14))()
            lprect_1 = lprect_2 + eax_29
            ebx += 1
            result = (*(**(*edi_1 + 0x1f0) + 0x14))()
            
            if (ebx s>= result)
                break
        while (lprect_1 s< eax_19)
    
    return result
}

// ============================================================
// 函数名称: sub_41c438
// 虚拟地址: 0x41c438
// WARP GUID: c7c17cb2-d233-5341-9381-8d3f95e5db15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetEnhMetaFileBits
// [内部子函数调用]: sub_402980, sub_419e30, sub_40276c, sub_41c3a4, sub_402754, sub_4128f8
// [被调用的父级函数]: sub_41c350, sub_41c3cc
// ============================================================

int32_t __convention("regparm")sub_41c438(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_70 = ebx
    int32_t esi
    int32_t var_74 = esi
    int32_t edi
    int32_t var_78 = edi
    sub_41c3a4(arg1)
    void var_6c
    sub_4128f8(arg2, &var_6c, 0x64)
    int32_t var_44
    
    if (var_44 != 0x464d4520)
        sub_419e30()
        noreturn
    
    uint32_t nSize
    uint8_t* pb = sub_402754(nSize)
    void* ebx_1 = *(arg1 + 0x20)
    int32_t* var_7c = &var_4
    int32_t (* var_80)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_402980(&var_6c, pb, 0x64)
    sub_4128f8(arg2, &pb[0x64], nSize - 0x64)
    HENHMETAFILE eax_7 = SetEnhMetaFileBits(nSize, pb)
    *(ebx_1 + 8) = eax_7
    
    if (eax_7 == 0)
        sub_419e30()
        noreturn
    
    *(ebx_1 + 0x18) = 0
    int32_t var_54
    int32_t var_4c
    *(ebx_1 + 0xc) = var_4c - var_54
    int32_t var_50
    int32_t var_48
    *(ebx_1 + 0x10) = var_48 - var_50
    *(arg1 + 0x24) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_7c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41c4ff
    return sub_40276c(pb)
}

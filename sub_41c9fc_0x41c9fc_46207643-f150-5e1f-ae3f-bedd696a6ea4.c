// ============================================================
// 函数名称: sub_41c9fc
// 虚拟地址: 0x41c9fc
// WARP GUID: 46207643-f150-5e1f-ae3f-bedd696a6ea4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetEnhMetaFileBits
// [内部子函数调用]: sub_402754, sub_412930, sub_40276c
// [被调用的父级函数]: sub_41c978, sub_41c707
// ============================================================

uint32_t __convention("regparm")sub_41c9fc(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t nSize_1 = *(arg1 + 0x20)
    uint32_t nSize_1 = *(arg1 + 0x20)
    
    if (nSize_1 != 0)
        uint8_t* lpData = nullptr
        uint32_t nSize = 0
        HENHMETAFILE ExceptionList = *(nSize_1 + 8)
        nSize_1 = GetEnhMetaFileBits(ExceptionList, nSize, lpData)
        
        if (nSize_1 != 0)
            uint8_t* lpData_1 = sub_402754(nSize_1)
            int32_t __saved_ebp
            int32_t* var_18_1 = &__saved_ebp
            int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            GetEnhMetaFileBits(*(*(arg1 + 0x20) + 8), nSize_1, lpData_1)
            sub_412930(arg2, lpData_1, nSize_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            void* const var_18_2 = &data_41ca7f
            return sub_40276c(lpData_1)
    
    return nSize_1
}

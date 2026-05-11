// ============================================================
// 函数名称: sub_41c508
// 虚拟地址: 0x41c508
// WARP GUID: a94961c2-afe8-5aca-b29e-f7d10c9d5f6e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetEnhMetaFileHeader, DeleteEnhMetaFile, MulDiv, SetWinMetaFileBits
// [内部子函数调用]: sub_419e30, sub_41ac80, sub_41c3a4, sub_402754, sub_40276c
// [被调用的父级函数]: sub_41c350, sub_41c3cc
// ============================================================

int32_t __convention("regparm")sub_41c508(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_a0 = ebx
    int32_t esi
    int32_t var_a4 = esi
    int32_t edi
    int32_t var_a8 = edi
    sub_41c3a4(arg1)
    (*(*arg2 + 4))()
    int32_t var_26
    int16_t var_12
    
    if (var_26 == 0x9ac6cdd7 && sub_41ac80(&var_26) == var_12)
        int32_t var_10 = sub_402754(arg3 - 0x16)
        void* ebx_2 = *(arg1 + 0x20)
        int32_t* var_c_2 = &var_4
        int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_4037f0
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        (*(*arg2 + 4))(ExceptionList, var_10_1, var_c_2)
        int16_t nSize
        *(*(arg1 + 0x20) + 0x18) = nSize
        
        if (nSize == 0)
            nSize = 0x60
        
        int32_t nNumerator = 0x9ec
        int16_t var_20
        int16_t var_1c
        ExceptionList = sx.d(var_1c) - sx.d(var_20)
        *(ebx_2 + 0xc) = MulDiv(ExceptionList, nNumerator, zx.d(nSize))
        int32_t nNumerator_1 = 0x9ec
        int16_t var_1e
        int16_t var_1a
        ExceptionList = sx.d(var_1a) - sx.d(var_1e)
        *(ebx_2 + 0x10) = MulDiv(ExceptionList, nNumerator_1, zx.d(nSize))
        void var_36
        var_36.d = 8
        var_36:4.d = 0
        var_36:8.d = 0
        var_36:0xc.d = 0
        void* lpMFP = &var_36
        HDC hdcRef = nullptr
        ExceptionList = nullptr
        nSize.d = lpMFP
        HENHMETAFILE eax_17 = SetWinMetaFileBits(nSize, ExceptionList, hdcRef, lpMFP)
        *(ebx_2 + 8) = eax_17
        
        if (eax_17 == 0)
            sub_419e30()
            noreturn
        
        ENHMETAHEADER var_9a
        ENHMETAHEADER* lpEnhMetaHeader = &var_9a
        uint32_t nSize_1 = 0x64
        ExceptionList = *(ebx_2 + 8)
        GetEnhMetaFileHeader(ExceptionList, nSize_1, lpEnhMetaHeader)
        var_36.d = 8
        var_36:4.d = var_9a.rclFrame.right
        var_36:8.d = var_9a.rclFrame.bottom
        var_36:0xc.d = 0
        DeleteEnhMetaFile(*(ebx_2 + 8))
        METAFILEPICT* lpMFP_1 = &var_36
        HDC hdcRef_1 = nullptr
        ExceptionList = nullptr
        nSize.d = lpMFP_1
        HENHMETAFILE eax_23 = SetWinMetaFileBits(nSize, ExceptionList, hdcRef_1, lpMFP_1)
        *(ebx_2 + 8) = eax_23
        
        if (eax_23 == 0)
            sub_419e30()
            noreturn
        
        *(arg1 + 0x24) = 0
        fsbase->NtTib.ExceptionList = arg2
        __return_addr = sub_41c67e
        return sub_40276c(hdcRef_1)
    
    sub_419e30()
    noreturn
}

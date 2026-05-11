// ============================================================
// 函数名称: sub_41a7f9
// 虚拟地址: 0x41a7f9
// WARP GUID: 0d05707f-ceb4-5787-b3c2-d623ff3d9a48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject, CreateDIBitmap
// [内部子函数调用]: sub_419f38, sub_41a0c8, sub_419f48
// [被调用的父级函数]: sub_41a720
// ============================================================

BOOLsub_41a7f9(void* arg1 @ ebp)
{
    // 第一条实际指令: *(arg1 - 0x14) += *(*(arg1 - 4) + 0x14)
    *(arg1 - 0x14) += *(*(arg1 - 4) + 0x14)
    *(*(arg1 - 4) + 0xe) = 1
    *(*(arg1 - 4) + 0x14) = sub_41a0c8(*(*(arg1 - 4) + 4), 1, 0x20) * *(*(arg1 - 4) + 8)
    *(*(arg1 - 4) + 0x20) = 2
    *(*(arg1 - 4) + 0x24) = 2
    int32_t* eax_9 = *(arg1 - 4) + 0x28
    *eax_9 = 0
    eax_9[1] = 0xffffff
    enum DIB_USAGE iUsage = DIB_RGB_COLORS
    BITMAPINFO* ebx = *(arg1 - 4)
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = *(arg1 - 0x14)
    HBITMAP eax_12 = CreateDIBitmap(*(arg1 - 0x10), ebx, 4, ExceptionList, ebx, iUsage)
    sub_419f38(eax_12)
    *(arg1 - 0xc) = eax_12
    void* var_4 = arg1
    int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_14
    void* ebp
    eax_14, ebp = sub_419f48(*(arg1 - 0xc), *(arg1 + 8), 1)
    **(ebp - 8) = eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_4_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) =
        sub_41a8b3
    return DeleteObject(*(ebp - 0xc))
}

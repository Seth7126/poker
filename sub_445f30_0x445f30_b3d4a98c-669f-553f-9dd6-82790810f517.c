// ============================================================
// 函数名称: sub_445f30
// 虚拟地址: 0x445f30
// WARP GUID: b3d4a98c-669f-553f-9dd6-82790810f517
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetActiveWindow, IsIconic, SetWindowPos, SetActiveWindow, ShowWindow
// [内部子函数调用]: sub_449490, sub_440aa8, sub_4318d0, sub_403df8, sub_444d94, sub_403898, sub_42ee38
// [被调用的父级函数]: 无
// ============================================================

void* __stdcallsub_445f30(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: *(arg1 - 4)
    *(arg1 - 4)
    sub_449490(data_5317d8)
    sub_403898(__return_addr)
    
    if (*(data_5317dc + 0x60) == *(arg1 - 4))
        sub_444d94(*(arg1 - 4), 0)
    
    if (*(*(arg1 - 4) + 0x217) == 1)
        sub_42ee38(*(arg1 - 4))
    else if ((*(*(arg1 - 4) + 0x2cc) & 8) == 0)
        HWND hWnd = nullptr
        
        if (sub_4318d0(*(arg1 - 4)) == GetActiveWindow() && IsIconic(sub_4318d0(*(arg1 - 4))) == 0)
            hWnd = sub_440aa8(sub_4318d0(*(arg1 - 4)))
        
        if (hWnd == 0)
            ShowWindow(sub_4318d0(*(arg1 - 4)), SW_HIDE)
        else
            SetWindowPos(sub_4318d0(*(arg1 - 4)), nullptr, 0, 0, 0, 0, 0x97)
            SetActiveWindow(hWnd)
    else
        SetWindowPos(sub_4318d0(*(arg1 - 4)), nullptr, 0, 0, 0, 0, 0x97)
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    void* eax_22 = *(arg1 - 4)
    *(eax_22 + 0x2cc) &= 0xfb
    fsbase->NtTib.ExceptionList = arg3
    sub_403df8(arg1 - 8)
    return arg1 - 8
}

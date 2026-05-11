// ============================================================
// 函数名称: sub_4249af
// 虚拟地址: 0x4249af
// WARP GUID: a72fcad6-6c6a-5d7f-bf1b-5fb4dc5054df
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __fastcallsub_4249af(char arg1, int32_t* arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg3 += arg3.b
    *0xa += arg1
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2.b
    LRESULT wParam = SendMessageA(sub_4318d0(*(arg3 + 0xc)), 0xbb, arg2, 0)
    
    if (wParam s< 0)
        return wParam
    
    LRESULT lParam = SendMessageA(sub_4318d0(*(arg3 + 0xc)), 0xbb, arg2 + 1, 0)
    
    if (lParam s< 0)
        lParam = SendMessageA(sub_4318d0(*(arg3 + 0xc)), 0xc1, wParam, 0) + wParam
    
    SendMessageA(sub_4318d0(*(arg3 + 0xc)), 0xb1, wParam, lParam)
    return SendMessageA(sub_4318d0(*(arg3 + 0xc)), 0xc2, 0, data_52e6c0)
}

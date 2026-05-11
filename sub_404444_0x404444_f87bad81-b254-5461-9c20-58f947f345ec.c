// ============================================================
// 函数名称: sub_404444
// 虚拟地址: 0x404444
// WARP GUID: f87bad81-b254-5461-9c20-58f947f345ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406403, sub_406398
// [被调用的父级函数]: j_sub_404444
// ============================================================

int32_t __fastcallsub_404444(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t edx = arg1
    int32_t edx = arg1
    int32_t ecx = 0
    
    if (arg2 != 0)
        ecx = *(arg2 - 4)
        edx -= ecx
    
    return sub_406398(sub_406403(ecx, edx), arg2, ecx) __tailcall
}

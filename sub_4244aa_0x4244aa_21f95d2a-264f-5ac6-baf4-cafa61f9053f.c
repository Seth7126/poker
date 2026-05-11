// ============================================================
// 函数名称: sub_4244aa
// 虚拟地址: 0x4244aa
// WARP GUID: 21f95d2a-264f-5ac6-baf4-cafa61f9053f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_423ff4, sub_424524, sub_4318d0
// [被调用的父级函数]: sub_424464
// ============================================================

int32_t __stdcallsub_4244aa(void* arg1 @ ebp, int32_t arg2)
{
    // 第一条实际指令: *(*(arg1 - 4) + 0x1f0)
    *(*(arg1 - 4) + 0x1f0)
    (*(**(arg1 - 4) + 0xb4))()
    sub_423ff4(*(arg1 - 4), *(*(arg1 - 4) + 0x1fd))
    
    if (*(*(arg1 - 4) + 0x1f5) != 0)
        SendMessageA(sub_4318d0(*(arg1 - 4)), 0xcc, zx.d(*(*(arg1 - 4) + 0x1f5)), 0)
    
    return sub_424524(*(arg1 - 4))
}

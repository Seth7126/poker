// ============================================================
// 函数名称: sub_4033fe
// 虚拟地址: 0x4033fe
// WARP GUID: 404b93e3-f635-545b-ad0f-0508061f7964
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403844, sub_403420
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4033fe(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0xc)
    int32_t* eax = *(arg1 + 0xc)
    
    if (eax != 0)
        int32_t edx
        edx.b = 0x81
        (*(*eax - 4))(eax)
        sub_403420(eax)
    
    sub_403844()
    return 1
}

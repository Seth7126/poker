// ============================================================
// 函数名称: sub_41bc68
// 虚拟地址: 0x41bc68
// WARP GUID: d7ebb75f-cf0a-531f-b3dc-3a509aa2a00a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4269a8
// ============================================================

void __stdcallsub_41bc68(void* arg1 @ eax, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = ecx
    int32_t* edi = *(arg1 + 4)
    
    if (edi != 0)
        (*(*edi + 0x5c))(arg2)
}

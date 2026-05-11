// ============================================================
// 函数名称: sub_4045f0
// 虚拟地址: 0x4045f0
// WARP GUID: c40539df-f19c-5558-b2fd-1ea65dbc52fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404548
// [被调用的父级函数]: sub_40e2dc
// ============================================================

int32_t __fastcallsub_4045f0(int32_t arg1, uint8_t* arg2)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    
    if (arg2 != 0)
        ecx = *(arg2 - 4)
    
    OLECHAR** eax
    return sub_404548(eax, arg2, ecx) __tailcall
}

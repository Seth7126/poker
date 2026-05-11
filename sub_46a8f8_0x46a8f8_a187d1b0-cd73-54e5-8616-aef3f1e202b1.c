// ============================================================
// 函数名称: sub_46a8f8
// 虚拟地址: 0x46a8f8
// WARP GUID: a187d1b0-cd73-54e5-8616-aef3f1e202b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_46a8f8(int32_t arg1, int32_t arg2, uint32_t arg3 @ eax, char arg4)
{
    // 第一条实际指令: if (*(arg3 + 0xce8 + (arg2 << 2) + 0x44) == 0)
    if (*(arg3 + 0xce8 + (arg2 << 2) + 0x44) == 0)
        if (arg4 == 0)
            *(arg3 + 0xce8 + (arg2 << 2) + 0x44) = 2
        else
            *(arg3 + 0xce8 + (arg2 << 2) + 0x44) = 1
        
        *(arg3 + 0xce8 + (arg2 << 2) + 0x9c) = arg1
        *(arg3 + 0xce8 + (arg2 << 2) + 0x70) = GetTickCount()
    else if (arg4 == 0)
        *(arg3 + 0xce8 + (arg2 << 2) + 0x44) = 2
    else
        *(arg3 + 0xce8 + (arg2 << 2) + 0x44) = 1
}

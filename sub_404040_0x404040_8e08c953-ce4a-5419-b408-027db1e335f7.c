// ============================================================
// 函数名称: sub_404040
// 虚拟地址: 0x404040
// WARP GUID: 8e08c953-ce4a-5419-b408-027db1e335f7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403f10
// [被调用的父级函数]: sub_4b62cc, sub_4097ab
// ============================================================

int32_t __fastcallsub_404040(int32_t arg1, wchar16* arg2)
{
    // 第一条实际指令: uint32_t ecx_1 = 0
    uint32_t ecx_1 = 0
    
    if (arg2 != 0)
        ecx_1 = *(arg2 - 4) u>> 1
    
    int32_t* eax
    return sub_403f10(eax, arg2, ecx_1) __tailcall
}

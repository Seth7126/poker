// ============================================================
// 函数名称: sub_410d28
// 虚拟地址: 0x410d28
// WARP GUID: 7fe2daf7-057d-5248-b04a-8619505dfd42
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_410e74, sub_410e6c
// ============================================================

void __convention("regparm")sub_410d28(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 4)
    int32_t* esi = *(arg1 + 4)
    
    if (esi != 0 && esi[3] == 0)
        (*(*esi + 0x10))()
}

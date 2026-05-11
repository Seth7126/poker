// ============================================================
// 函数名称: sub_434d5c
// 虚拟地址: 0x434d5c
// WARP GUID: 48693419-8849-5c8a-94cc-ceebf515557c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c
// [被调用的父级函数]: sub_433d44
// ============================================================

void __convention("regparm")sub_434d5c(void* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    
    if (arg2 == 0 || arg2 == 0)
        return 
    
    arg1.b = *(*(arg2 + 0x14) + 0x10)
    
    if (arg1.b == *(esi + 0x48))
        *(arg2 + 0x20) = sub_402b4c(float.t(*(arg2 + 0x20)) * fconvert.t(*(esi + 0x40)))
}

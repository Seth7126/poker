// ============================================================
// 函数名称: sub_45b630
// 虚拟地址: 0x45b630
// WARP GUID: e4ac497b-ca1d-59a1-9297-0e2cc9023480
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45bc80
// [被调用的父级函数]: sub_45c55c
// ============================================================

void __convention("regparm")sub_45b630(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    void* esi = *(ebx + 0x19e)
    
    if (*(esi + 0x10) != 0)
        if (*(ebx + 0x4c) != 0)
            arg1 = sub_45bc80(ebx)
        
        if (*(ebx + 0x4c) == 0 || arg1 == 0)
            *(esi + 0xc) = sub_45bab0
        else
            *(esi + 0xc) = sub_45bd90
    
    *(ebx + 0x98) = 0
}

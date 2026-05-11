// ============================================================
// 函数名称: sub_42a524
// 虚拟地址: 0x42a524
// WARP GUID: f9ba5bee-9e4a-5490-9a2d-49984c8428b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42bd90
// [被调用的父级函数]: sub_43329c, sub_42a430
// ============================================================

void __convention("regparm")sub_42a524(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    void* esi = *(ebx + 0x58)
    
    if (esi == 0)
        return 
    
    if (sub_42bd90(esi).b == 0)
        *(ebx + 0x54) &= 0xffffff7f
    else
        *(ebx + 0x54) |= 0x80
}

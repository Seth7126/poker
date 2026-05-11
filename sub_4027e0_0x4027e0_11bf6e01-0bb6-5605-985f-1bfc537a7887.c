// ============================================================
// 函数名称: sub_4027e0
// 虚拟地址: 0x4027e0
// WARP GUID: 11bf6e01-0bb6-5605-985f-1bfc537a7887
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406c44, sub_403d4c
// [被调用的父级函数]: sub_404668, sub_4048a0, sub_404cdc, sub_404524, sub_404a88, sub_402824, sub_404cd4, sub_403010, sub_403008, sub_4045cc, sub_405bb8, sub_40496c, sub_4046b4, sub_402784, sub_40276c, sub_4050b4, sub_404d30, sub_403260, sub_405b74, sub_402754, sub_405368, sub_403d58, sub_40460c, sub_404780
// ============================================================

void __convention("regparm")sub_4027e0(int32_t arg1) __noreturn
{
    // 第一条实际指令: int32_t eax = arg1 & 0x7f
    int32_t eax = arg1 & 0x7f
    int32_t ecx = data_531004
    
    if (ecx != 0)
        eax = ecx()
    
    void* eax_1
    eax_1.b = *(eax + 0x402808)
    
    if (eax - 1 s< 0)
        *(sub_406c44() + 4)
    
    noreturn sub_403d4c() __tailcall
}

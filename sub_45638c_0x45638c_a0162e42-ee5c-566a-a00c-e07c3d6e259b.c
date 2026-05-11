// ============================================================
// 函数名称: sub_45638c
// 虚拟地址: 0x45638c
// WARP GUID: a0162e42-ee5c-566a-a00c-e07c3d6e259b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_456194
// [被调用的父级函数]: sub_453ff8
// ============================================================

int32_t __convention("regparm")sub_45638c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t eax = arg1[4]
    
    if (eax != 0xcf && eax != 0xcc)
        void* eax_1 = *arg1
        *(eax_1 + 0x14) = 0x12
        *(eax_1 + 0x18) = arg1[4]
        (**arg1)()
    
    if (esi s<= 0)
        esi = 1
    
    if (*(*(arg1 + 0x1a6) + 0x14) != 0 && esi s> arg1[0x23])
        esi = arg1[0x23]
    
    arg1[0x25] = esi
    return sub_456194(arg1)
}

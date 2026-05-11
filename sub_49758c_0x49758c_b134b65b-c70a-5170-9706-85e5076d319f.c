// ============================================================
// 函数名称: sub_49758c
// 虚拟地址: 0x49758c
// WARP GUID: b134b65b-c70a-5170-9706-85e5076d319f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4975dc, sub_495b60
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_49758c(void* arg1, char arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t* edi = *(esi + 0x80)
    arg1.b = edi[2].b
    
    if (arg2 == arg1.b || (*(esi + 0x20) & 0x10) != 0)
        return arg1
    
    if (arg1.b != 0)
        edi[1]
        return (*(*edi + 8))()
    
    int32_t var_c_1 = *(esi + 0x34)
    int32_t eax_1
    eax_1.w = *(esi + 0x28)
    bool eax_3 = sub_4975dc(esi) == 1
    return sub_495b60(*(esi + 0x2c), *(esi + 0x30), edi, eax_3, eax_1.w, var_c_1)
}

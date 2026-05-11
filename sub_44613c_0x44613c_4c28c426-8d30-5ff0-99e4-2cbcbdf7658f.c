// ============================================================
// 函数名称: sub_44613c
// 虚拟地址: 0x44613c
// WARP GUID: 4c28c426-8d30-5ff0-99e4-2cbcbdf7658f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_44947c, sub_4462ec, sub_444050, sub_446388
// [被调用的父级函数]: sub_472ccc, sub_4e6659, sub_50fa27, sub_448668, sub_471144, sub_43550c, sub_445558, sub_509890, sub_47be18, sub_50f7b8, sub_4e649b
// ============================================================

void __convention("regparm")sub_44613c(BOOL arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    int32_t* esi = arg1
    
    if ((esi[0xb3].b & 8) != 0)
        esi[0x8d] = 2
        return 
    
    if ((*(*esi + 0xd0))().b == 0)
        return 
    
    if (*(esi + 0x217) != 1)
        var_c.b = 1
    else if ((esi[0x84].b & 2) == 0)
        var_c.b = 0
    else
        var_c.b = 3
    
    int32_t ebx
    ebx.w = 0xffb3
    sub_4032ac(esi, &var_c)
    
    if (var_c.b == 0)
        return 
    
    if (esi == *(data_5317d8 + 0x38))
        data_5317d8
        sub_44947c()
    else if (var_c.b == 1)
        sub_4462ec()
    else if (var_c.b != 3)
        sub_446388(esi)
    else
        sub_444050(esi, 1)
}

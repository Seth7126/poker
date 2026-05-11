// ============================================================
// 函数名称: sub_42b690
// 虚拟地址: 0x42b690
// WARP GUID: 46b9a6f8-90e7-5ab3-a588-7c4df6915ca5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42c754
// [被调用的父级函数]: sub_446ed4, sub_42bc48, sub_4342ac, sub_42a930, sub_43550c, sub_4d951f, sub_42d2c0, sub_42bc40, sub_4d9378, sub_4d954c, sub_4431dc
// ============================================================

int32_t* __convention("regparm")sub_42b690(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    var_c.b = arg2
    int32_t* esi = arg1
    arg1.b = *(esi + 0x47)
    
    if (arg1.b == var_c.b)
        return arg1
    
    int32_t ebx
    ebx.w = 0xffd2
    sub_4032ac(esi)
    *(esi + 0x47) = var_c.b
    int32_t ecx_1
    ecx_1.b = var_c.b
    sub_42c754(esi, 0)
    ebx.w = 0xffd5
    return sub_4032ac(esi)
}

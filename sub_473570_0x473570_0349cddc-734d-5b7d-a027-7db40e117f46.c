// ============================================================
// 函数名称: sub_473570
// 虚拟地址: 0x473570
// WARP GUID: 0349cddc-734d-5b7d-a027-7db40e117f46
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42affc, sub_52d8ac, sub_42afdc, sub_47013c
// [被调用的父级函数]: sub_471144
// ============================================================

int32_t __convention("regparm")sub_473570(int32_t* arg1)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_c = esi
    arg1[0x28b].b = 2
    sub_42afdc(arg1, 1)
    sub_47013c(arg1)
    int32_t edx_1 = arg1[0x288]
    char eax_2 = *(edx_1 + 4)
    
    if (eax_2 != 0 && eax_2 != 0)
        sub_52d8ac(edx_1)
    
    sub_42afdc(arg1, 1)
    sub_42affc(arg1, 1)
    int32_t result = sub_47013c(arg1)
    arg1[0x28b].b = 3
    return result
}

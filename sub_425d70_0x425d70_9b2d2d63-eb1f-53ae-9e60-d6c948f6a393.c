// ============================================================
// 函数名称: sub_425d70
// 虚拟地址: 0x425d70
// WARP GUID: 9b2d2d63-eb1f-53ae-9e60-d6c948f6a393
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42e994, sub_42e8c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_425d70(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t* esi_1
    ebx, esi_1 = sub_42e994(arg1, arg2)
    sub_42e8c0(sub_425e67+1, arg2)
    int32_t eax_2 = 0x52e710
    
    if (esi_1[0x82].b != 0)
        eax_2 = 0x52e718
    
    int32_t ecx
    ecx.b = esi_1[0x81].b
    int32_t ecx_1
    ecx_1.b = *(esi_1 + 0x207)
    int32_t ecx_2
    ecx_2.b = *(esi_1 + 0x206)
    int32_t eax_3
    eax_3.b = *(esi_1 + 0x205)
    int32_t edx_7 = arg2[1] | 0x300041 | *((ecx << 2) + &data_52e6fc) | *((ecx_1 << 2) + &data_52e708)
        | *(eax_2 + (ecx_2 << 2)) | *((eax_3 << 2) + &data_52e720)
    eax_3.b = esi_1[0x7f] != 0
    int32_t eax_5
    eax_5.b = esi_1[0x7d].b
    int32_t edx_9 = edx_7 | *(((eax_3 & 0x7f) << 2) + &data_52e728) | *((eax_5 << 2) + &data_52e67c)
    eax_5.b = esi_1[0x83] != 0
    arg2[1] = edx_9 | *(((eax_5 & 0x7f) << 2) + &data_52e730)
    
    if (*data_53040c != 0 && esi_1[0x4e].b != 0 && esi_1[0x7d].b == 1)
        arg2[1] &= 0xff7fffff
        arg2[2] |= 0x200
    
    ebx.w = 0xffce
    int32_t result = not.d(*(((sub_4032ac(esi_1) & 0x7f) << 2) + &data_52e738) | 1)
    arg2[9] &= result
    return result
}

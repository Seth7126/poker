// ============================================================
// 函数名称: sub_444ce0
// 虚拟地址: 0x444ce0
// WARP GUID: bc0a4155-e79c-59c2-80e1-5784be8b4de1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_4448d8, sub_444c90, sub_444d94, sub_431ce8
// [被调用的父级函数]: sub_445500, sub_445708
// ============================================================

HWND __convention("regparm")sub_444ce0(struct _EXCEPTION_REGISTRATION_RECORD* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    struct _EXCEPTION_REGISTRATION_RECORD* esi_1 = arg1
    esi_1->__offset(0x216).b = arg2
    HWND result = esi_1->__offset(0x264).d
    int32_t ecx
    
    if (result != 0)
        int32_t ecx_1
        ecx_1.b = arg2
        result, ecx = sub_42c754(result, 0)
        esp = &var_8
    
    if (arg2 != 0)
        if (esi_1->__offset(0x208).d == 0 && (esi_1->__offset(0x20).b & 0x10) == 0)
            char var_c_2 = 1
            int32_t var_10 = 0
            esp = &var_10
            ecx.b = 1
            esi_1 = sub_4448d8(esi_1, sub_431ce8(esi_1, 0, ecx, var_10.b, var_c_2))
        
        sub_444d94(esi_1, 1)
        result = sub_444c90(esi_1)
    
    *esp
    esp[1]
    return result
}

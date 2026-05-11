// ============================================================
// 函数名称: sub_473684
// 虚拟地址: 0x473684
// WARP GUID: f2157fd2-77d6-5cd7-b6e0-ce922b8cf855
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_4471a4, sub_44399c, sub_473938, sub_42afdc, sub_4735d8, sub_472c3c, sub_42affc, sub_4318d0, sub_47013c, sub_42b220, sub_52d8ac, sub_453088, sub_42b1dc, sub_46e24c, sub_42af98, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_471144, sub_473878, sub_478234
// ============================================================

int32_t __convention("regparm")sub_473684(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t edx
    edx.b = 1
    sub_46e24c(arg1, esi, edi)
    arg1[0x37c] = arg1[0x37d]
    int32_t edx_1
    edx_1.b = 1
    sub_46e24c(arg1, esi, edi)
    bool o = unimplemented  {imul eax, eax, 0x3}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t eax_5 = *(arg1[0x289] + arg1[0x36d] * 0xc + 4)
    arg1[0x226] = eax_5
    
    if (eax_5 s< 0xc8)
        arg1[0x226] = 0x1e0
    
    int32_t eax_6
    int32_t edx_3
    eax_6, edx_3 = sub_402b4c(float.t(arg1[0x226]) / fconvert.t(3f) * fconvert.t(4f))
    int32_t* esp = &var_14
    
    if (eax_6 s>> 0x1f != edx_3)
        sub_403008()
        noreturn
    
    arg1[0x225] = eax_6
    arg1[0x38c] = arg1[0x226]
    int32_t edi_1 = arg1[0x225]
    arg1[0x38b] = edi_1
    int32_t esi_1 = arg1[0x226]
    *data_530a18
    int32_t eax_12 = sub_4471a4()
    
    if (add_overflow(edi_1, arg1[0xc]))
        sub_403010()
        noreturn
    
    if (eax_12 s< edi_1 + arg1[0xc])
        sub_42af98(arg1)
    
    int32_t edx_5 = arg1[0x288]
    eax_12.b = *(edx_5 + 4)
    
    if (eax_12.b != 0)
        if (eax_12.b != 0)
            sub_52d8ac(edx_5)
        
        *(arg1 + 0x97d) = 0
        BOOL eax_15 = arg1[0x287]
        
        if (eax_15 s< 0)
            sub_403008()
            noreturn
        
        sub_453088(eax_15)
        sub_44399c(arg1, 1)
        int32_t var_18_1 = sub_42b220(arg1)
        int32_t var_1c = sub_42b1dc(arg1)
        HWND eax_22 = sub_4318d0(arg1)
        
        if (eax_22 s< 0)
            sub_403008()
            noreturn
        
        sub_473938(arg1, eax_22)
        BOOL eax_24 = arg1[0x287]
        
        if (eax_24 s< 0)
            sub_403008()
            noreturn
        
        sub_453088(eax_24)
        sub_44399c(arg1, 0)
        var_1c = sub_42b220(arg1)
        int32_t var_20_1 = sub_42b1dc(arg1)
        HWND eax_31 = sub_4318d0(arg1)
        
        if (eax_31 s< 0)
            sub_403008()
            noreturn
        
        esp = &var_1c
        ebp_1, esi_1 = sub_473938(arg1, eax_31)
    
    int32_t eax_34 = sub_4735d8(arg1, esi_1)
    
    if (arg1[0x28b].b != 3)
        arg1[0x28b].b = 1
    
    sub_42affc(arg1, eax_34)
    int32_t eax_36
    int32_t edx_11
    eax_36, edx_11 = sub_402b4c(float.t(arg1[0xf]) / fconvert.t(3f) * fconvert.t(4f))
    *(esp - 4) = eax_36
    
    if (eax_36 s>> 0x1f != edx_11)
        sub_403008()
        noreturn
    
    sub_42afdc(arg1, *(esp - 4))
    
    if (arg1[0x28b].b != 3)
        arg1[0x28b].b = 2
    
    ebp_1[-1]
    sub_47013c(arg1)
    int32_t result = sub_472c3c(arg1)
    *esp
    esp[1]
    esp[2]
    esp[3]
    esp[4]
    return result
}

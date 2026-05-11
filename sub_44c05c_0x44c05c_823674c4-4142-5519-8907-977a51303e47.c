// ============================================================
// 函数名称: sub_44c05c
// 虚拟地址: 0x44c05c
// WARP GUID: 823674c4-4142-5519-8907-977a51303e47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawTextA
// [内部子函数调用]: sub_4190bc, sub_42b778, sub_4191d8, sub_419a60, sub_4199bc, sub_40423c, sub_44b760, sub_419720, sub_419b40, sub_403df8, sub_42d69c, sub_44c024
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_44c05c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t var_20 = 0
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_1
    void* edx
    eax_1, edx = (*(*arg1 + 0x40))(ExceptionList, var_34, var_30)
    eax_1.b = *(arg1 + 0x1fa)
    RECT var_1c
    int32_t var_8
    
    if (eax_1.b != 0)
        int32_t* var_c_1 = &var_4
        sub_44c024(eax_1, edx)
        int32_t* var_c_2 = var_c_1
        var_1c.bottom = arg1[0x7f]
        sub_44b760(var_8, &var_1c, arg1[0x7c], var_1c.bottom)
    
    int32_t eax_5 = arg1[0x18]
    int32_t var_c_3 = eax_5
    var_1c.bottom = arg1[0x80]
    RECT* eax_7
    void* edx_4
    eax_7, edx_4 = sub_44b760(eax_5, &var_1c, arg1[0x7c], var_1c.bottom)
    eax_7.b = *(arg1 + 0x1f9)
    
    if (eax_7.b != 0)
        int32_t* var_c_4 = &var_4
        sub_44c024(eax_7, edx_4)
        int32_t* var_c_5 = var_c_4
        var_1c.bottom = arg1[0x7f]
        sub_44b760(var_8, &var_1c, arg1[0x7c], var_1c.bottom)
    
    int32_t* esi_1 = arg1[0x7c]
    arg1[0x18]
    sub_4190bc(esi_1[5])
    sub_419720(esi_1, &var_1c)
    sub_4191d8(esi_1[5], 1)
    arg1[0x16]
    sub_419a60(esi_1)
    int32_t eax_16 = sub_4199bc(esi_1, sub_44c1b7+5)
    int32_t edx_12 = var_1c.bottom + var_1c.top - eax_16
    int32_t edx_13 = edx_12 s>> 1
    bool c = unimplemented  {sar edx, 0x1}
    
    if (edx_12 s>> 1 s< 0)
        edx_13 = adc.d(edx_13, 0, c)
    
    var_1c.top = edx_13
    var_1c.bottom = eax_16 + edx_13
    int32_t eax_18
    eax_18.b = *(arg1 + 0x207)
    enum DRAW_TEXT_FORMAT format
    int32_t ecx_4
    format, ecx_4 = sub_42d69c(arg1, *((eax_18 << 2) + &data_52eabc) | 0x44)
    var_1c.bottom = &var_1c
    var_1c.right = 0xffffffff
    sub_42b778(ecx_4, &var_20)
    var_1c.top = sub_40423c(var_20)
    var_1c.left = sub_419b40(esi_1)
    DrawTextA(var_1c.left, var_1c.top, var_1c.right, var_1c.bottom, format)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_44c1ac
    int32_t* result = &var_20
    sub_403df8(result)
    return result
}

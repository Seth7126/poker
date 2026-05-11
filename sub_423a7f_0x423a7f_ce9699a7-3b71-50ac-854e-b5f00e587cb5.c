// ============================================================
// 函数名称: sub_423a7f
// 虚拟地址: 0x423a7f
// WARP GUID: ce9699a7-3b71-50ac-854e-b5f00e587cb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OffsetRect
// [内部子函数调用]: sub_4032ac, sub_4190bc, sub_4191d8, sub_423ca0, sub_419720
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_423a7f(int32_t* arg1, char arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg1 += 1
    *arg1 += 1
    *arg3 += arg3.b
    *arg3 += arg3:1.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2
    int32_t* ebx = *(arg3 + 0x120)
    
    if (sub_423ca0(arg3) == 0)
        *(arg3 + 0x60)
        sub_4190bc(ebx[5])
        sub_4191d8(ebx[5], 0)
        (*(*arg3 + 0x40))()
        RECT var_14
        sub_419720(ebx, &var_14)
    
    sub_4191d8(ebx[5], 1)
    (*(*arg3 + 0x40))()
    int32_t eax_8
    eax_8.b = arg3[0x12f]
    int32_t edi
    edi.w = *((eax_8 << 1) + &data_52e68c)
    edi.w |= 0x40
    int32_t eax_9
    eax_9.b = arg3[0x12c]
    edi.w |= *((eax_9 << 1) + &data_52e684)
    uint32_t edi_1 = zx.d(edi.w)
    RECT lprc
    
    if (arg3[0x12e] != 0)
        void var_24
        __builtin_memcpy(&var_24, &lprc, 0x10)
        ebx.w = 0xffcc
        sub_4032ac(arg3, &var_24, edi_1 | 0x400)
        int32_t var_18
        
        if (arg3[0x12e] != 2)
            int32_t eax_14 = *(arg3 + 0x3c) - var_18
            int32_t dy = eax_14 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_14 s>> 1 s< 0)
                dy = adc.d(dy, 0, c_1)
            
            OffsetRect(&lprc, 0, dy)
        else
            OffsetRect(&lprc, 0, *(arg3 + 0x3c) - var_18)
    
    ebx.w = 0xffcc
    return sub_4032ac(arg3, &lprc, edi_1)
}

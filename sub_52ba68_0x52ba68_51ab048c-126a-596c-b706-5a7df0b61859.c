// ============================================================
// 函数名称: sub_52ba68
// 虚拟地址: 0x52ba68
// WARP GUID: 51ab048c-126a-596c-b706-5a7df0b61859
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_52b63c, sub_409040, sub_47a1c0, sub_402b4c, sub_404280, sub_403e1c, sub_403010, sub_52b7f8, sub_403e90, sub_404078, sub_52b40c, sub_404188, sub_404080, sub_519644, sub_52b570, sub_47ab08, sub_40422c, sub_4040c4, sub_403df8, sub_52b8e8, sub_4c1e14, sub_51b4f0, sub_4c1dd8, sub_5193d0
// [被调用的父级函数]: sub_518f60, sub_5193d0, sub_4cd720
// ============================================================

int32_t __convention("regparm")sub_52ba68(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t i_2 = arg3
    int32_t* esp_1 = &i_2
    int32_t i_1 = 5
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_1
    int32_t i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    int32_t var_10 = arg2
    sub_40422c(arg1)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    void* var_2c
    sub_403e90(&var_2c, arg1)
    char ebx = 0
    void var_c
    sub_403df8(&var_c)
    
    if (i_3 s>= 1)
        if (sub_5193d0(*data_5303b8, 0) != 0)
            sub_403e90(&var_c, var_2c)
        
        void var_28
        void* ebp_2 = sub_52b40c(var_2c, &var_28)
        void* edx_4
        edx_4, ebx, ebp_1 = sub_52b570(*(ebp_2 - 0x24), *(ebp_2 - 0xc), ebp_2 - 4)
        
        if (ebp_1[-4] == 1)
            *(esp_8 - 4) = ebp_1[-3]
            *(esp_8 - 8) = 0
            ebx, ebp_1 = sub_51b4f0(*data_5303b8, ebp_1[-1], &ebp_1[-2])
        else if (ebp_1[-4] != 2)
            if (ebp_1[-4] == 4)
                *(esp_8 - 4) = ebp_1
                sub_52b7f8(ebp_1[-0xa], edx_4)
                *(esp_8 - 4)
            else if (ebp_1[-4] == 0x65)
                *(esp_8 - 4) = ebp_1
                sub_52b8e8(ebp_1[-0xa], edx_4)
                *(esp_8 - 4)
            else if (ebp_1[-4] == 0x64)
                if (sub_409040(ebp_1[-1]) != 0)
                    *(esp_8 - 4) = ebp_1[-3]
                    *(esp_8 - 8) = 0
                    ebx, ebp_1 = sub_51b4f0(*data_5303b8, ebp_1[-1], &ebp_1[-2])
                else
                    *(esp_8 - 4) = &ebp_1[-0xb]
                    int32_t eax_18 = sub_404078(ebp_1[-0xa])
                    
                    if (add_overflow(eax_18, 0xfffffffd))
                        sub_403010()
                        noreturn
                    
                    sub_404280(4, eax_18 - 3, ebp_1[-0xa])
                    sub_404188(ebp_1[-0xb], "solo")
                    
                    if (eax_18 == 3)
                        *(esp_8 - 4) = &ebp_1[-0xc]
                        int32_t eax_23 = sub_404078(ebp_1[-0xa])
                        
                        if (add_overflow(eax_23, 0xfffffffc))
                            sub_403010()
                            noreturn
                        
                        sub_404280(eax_23 - 4, 1, ebp_1[-0xa])
                        sub_404080(&ebp_1[-0xc], U"_")
                        void* ebp_3 = sub_52b40c(ebp_1[-0xc], &ebp_1[-9])
                        void* ebp_4 = sub_52b570(*(ebp_3 - 0x24), *(ebp_3 - 0xc), ebp_3 - 4)
                        sub_403e90(ebp_4 - 0x20, "_solo")
                        void* ebp_5 = sub_52b40c(*(ebp_4 - 0x20), ebp_4 - 0x1c)
                        void* ebp_6 = sub_52b570(*(ebp_5 - 0x1c), *(ebp_5 - 0xc), ebp_5 - 0x14)
                        *(esp_8 - 4) = *(ebp_6 - 0xc)
                        *(esp_8 - 8) = 0
                        void* ebp_7 = sub_51b4f0(*data_5303b8, *(ebp_6 - 4), ebp_6 - 8)
                        *(esp_8 - 4) = *(ebp_7 - 0xc)
                        *(esp_8 - 8) = 0
                        ebx, ebp_1 = sub_51b4f0(*data_5303b8, *(ebp_7 - 0x14), ebp_7 - 8)
            else if (ebp_1[-4] s>= 0xa)
                void* ebp_8 = sub_52b40c(ebp_1[-0xa], &ebp_1[-9])
                char ebx_1
                void* ebp_9
                ebx_1, ebp_9 = sub_52b570(*(ebp_8 - 0x24), *(ebp_8 - 0xc), ebp_8 - 4)
                *(esp_8 - 4) = ebp_9 - 0x20
                sub_519644(*(*data_5301f4 + (*(ebp_9 - 0xc) << 2) + 0x111cc), *(ebp_9 - 0x10), 
                    *data_5309fc)
                
                if (ebx_1 != 0)
                    sub_403e90(ebp_9 - 8, *(ebp_9 - 0x20))
                
                void* ebp_10 = sub_52b40c(*(ebp_9 - 0x20), ebp_9 - 0x1c)
                int32_t ecx_16
                ecx_16, ebx, ebp_1 = sub_52b570(*(ebp_10 - 0x1c), *(ebp_10 - 0xc), ebp_10 - 0x14)
                
                if (ebp_1[-4] != 0xa)
                    *(esp_8 - 4) = ebp_1
                    sub_52b63c(&ebp_1[-6], ebp_1[-8], ecx_16)
                    *(esp_8 - 4)
                else
                    *(esp_8 - 4) = ebp_1
                    sub_52b63c(&ebp_1[-6], ebp_1[-8], ecx_16)
                    *(esp_8 - 4)
    
    sub_4040c4(&ebp_1[-6], U"?", ebp_1[-6])
    
    if ((ebp_1[-4] s< 0xa || ebp_1[-4] s> 0x15) && ebx == 0 && *(*data_530304 + 0xcf9) == 0)
        *(esp_8 - 4) = ebp_1[-6]
        int80_t x87_r0
        sub_47ab08(*data_530304, *data_530a74, *(data_52fed4 + (ebp_1[-3] << 2)), x87_r0)
        *(esp_8 + 0x1c) = 1
        sub_47a1c0(*(data_52fed4 + (ebp_1[-3] << 2)), *data_530a74, *data_530304)
        esp_8 += 0x20
        void* eax_63 = *data_5301f4
        int32_t temp2_1 = *(eax_63 + 0x1024c)
        *(eax_63 + 0x1024c) += 1
        
        if (add_overflow(temp2_1, 1))
            sub_403010()
            noreturn
        
        int32_t ebx_2 = ebp_1[-3]
        
        if (*(*data_5301f4 + ebx_2 + 0x10165) != 0)
            int32_t edx_31 = ebx_2 * 5
            bool o_4 = unimplemented  {imul edx, ebx, 0x5}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t eax_67
            eax_67.w = *(*data_5301f4 + (edx_31 << 2) + 0x1017a)
            
            if (eax_67.w s> 0)
                *(esp_8 - 4) = 0
                bool o_5 = unimplemented  {imul edx, ebx, 0x5}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                *data_5301f4
                sub_47a1c0(sx.d(*(*data_5301f4 + (edx_31 << 2) + 0x1017c)), sx.d(eax_67.w), 
                    *data_530304)
        
        *(*data_5301f4 + ebx_2 + 0x10165) = 3
        uint32_t eax_72
        int32_t ecx_25
        eax_72, ecx_25 = GetTickCount()
        int32_t esi_2 = ebx_2 * 5
        bool o_6 = unimplemented  {imul esi, ebx, 0x5}
        
        if (o_6)
            sub_403010()
            noreturn
        
        *(*data_5301f4 + (esi_2 << 2) + 0x10170) = eax_72
        *(*data_5301f4 + (esi_2 << 2) + 0x10174) = *(data_530598 + 0x34)
        
        if (sub_4c1e14() != 0)
            *(*data_5301f4 + (esi_2 << 2) + 0x10174) =
                sub_402b4c(fconvert.t(1f) / sub_4c1dd8(ecx_25) * float.t(*(data_530598 + 0x34)))
        
        *(*data_5301f4 + (esi_2 << 2) + 0x1017a) = (*data_530a74).w
        *(*data_5301f4 + (esi_2 << 2) + 0x1017c) = (*(data_52fed4 + (ebp_1[-3] << 2))).w
        
        if (ebp_1[2].b != 0)
            *(*data_5301f4 + (esi_2 << 2) + 0x1017c) = 0
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_52bed9
    sub_403e1c(&ebp_1[-0xc], 8)
    return sub_403e1c(&ebp_1[-2], 2)
}

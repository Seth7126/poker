// ============================================================
// 函数名称: sub_4c585c
// 虚拟地址: 0x4c585c
// WARP GUID: 19132bb4-303f-59b9-9ba9-da8a2fb9fd2c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a010, sub_4d6cdc, sub_47a9a0, sub_4c0924, sub_4ecc78, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4c96bc, sub_4e649b
// ============================================================

int32_tsub_4c585c()
{
    // 第一条实际指令: void* esi = data_5301f4
    void* esi = data_5301f4
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4c0924() == 0)
        if (*(*esi + 0x111f8) == 0)
            int32_t* ebx_2 = *esi + 0x2006c
            *ebx_2 = 1
            sub_47a9a0(*data_5302dc, *(data_5301f0 + 0x1c), *data_530304, data_5300d0)
            void* eax_27 = data_5300d0
            int32_t temp1_1 = *eax_27
            *eax_27 += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
            
            *(*esi + 0x456c) = *data_5300d0
            sub_47a9a0(*data_530890, *(data_5301f0 + 0x1c), *data_530304, *esi + 0x20068)
            void* ebp_2 = sub_4d6cdc(*data_530304)
            sub_47a9a0(*data_53071c, *(data_5301f0 + 0x1c), *data_530304, ebp_2 - 4)
            
            if (*(ebp_2 - 4) == 1)
                ebx_2[1] = 0x64
            else if (*(ebp_2 - 4) != 2)
                ebx_2[1] = 0x1f4
            else
                ebx_2[1] = 0xc8
            
            sub_47a9a0(*data_530a70, *(data_5301f0 + 0x1c), *data_530304, ebp_2 - 4)
            
            if (*(ebp_2 - 4) == 1)
                ebx_2[2] = 2
            else if (*(ebp_2 - 4) != 2)
                ebx_2[2] = 0xa
            else
                ebx_2[2] = 4
            
            sub_47a9a0(*data_530030, *(data_5301f0 + 0x1c), *data_530304, ebp_2 - 4)
            ebx_2[4].b = 0
            *(ebx_2 + 0x11) = 0
            
            if (*(ebp_2 - 4) == 1)
                *(ebx_2 + 0x11) = 1
            
            if (*(ebp_2 - 4) == 2)
                ebx_2[4].b = 1
            
            sub_47a9a0(*data_5308a4, *(data_5301f0 + 0x1c), *data_530304, ebp_2 - 4)
            
            if (*(ebp_2 - 4) == 1)
                ebx_2[3] = 0x186a0
            else if (*(ebp_2 - 4) == 2)
                ebx_2[3] = 7
            else if (*(ebp_2 - 4) == 3)
                ebx_2[3] = 0xa
            else if (*(ebp_2 - 4) == 4)
                ebx_2[3] = 0xf
            else if (*(ebp_2 - 4) == 5)
                ebx_2[3] = 0x14
            else if (*(ebp_2 - 4) != 6)
                ebx_2[3] = 0x1e
            else
                ebx_2[3] = 0x19
            
            int32_t eax_49 = *(*esi + 0x20074)
            *(*esi + 0x21108) = eax_49
            *(*esi + 0x210f8) = eax_49
            *(*esi + 0x210f0) = *(*esi + 0x21108)
            *(*esi + 0x210f4) = *(*esi + 0x21108)
            
            if (*(ebx_2 + 0x11) != 0)
                void* eax_54 = *esi
                *(eax_54 + 0x21108)
                bool o_3 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                *(*esi + 0x210f4) = *(eax_54 + 0x21108) * 2
        else
            int32_t* ebx_1 = *esi + 0x2006c
            *ebx_1 = 1
            *data_5300d0 = 8
            
            if (*(*esi + 0x11204) s<= 2)
                *data_5300d0 = 6
            
            *(*esi + 0x456c) = *data_5300d0
            *(*esi + 0x20068) = *(*esi + 0x111fc)
            void* ebp_1 = sub_4d6cdc(*data_530304)
            ebx_1[1] = 0x64
            ebx_1[2] = 4
            
            if (*(*esi + 0x11204) == 4)
                ebx_1[2] = 2
                ebx_1[1] = 0x4b
            
            *(ebp_1 - 4) = *(*esi + 0x11200)
            ebx_1[4].b = 0
            *(ebx_1 + 0x11) = 0
            
            if (*(ebp_1 - 4) == 1)
                *(ebx_1 + 0x11) = 1
            
            if (*(ebp_1 - 4) == 2)
                ebx_1[4].b = 1
            
            ebx_1[3] = 0xa
            int32_t eax_16 = *(*esi + 0x20074)
            *(*esi + 0x21108) = eax_16
            *(*esi + 0x210f8) = eax_16
            *(*esi + 0x210f0) = *(*esi + 0x21108)
            *(*esi + 0x210f4) = *(*esi + 0x21108)
            
            if (*(ebx_1 + 0x11) != 0)
                void* eax_21 = *esi
                *(eax_21 + 0x21108)
                bool o_1 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                *(*esi + 0x210f4) = *(eax_21 + 0x21108) * 2
        
        *(*esi + 0x2008c) = sub_47a010(*data_530304, *data_5308d0, *data_52feb8)
    
    if (*(*esi + 0x111f9) != 0)
        sub_4ecc78()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}

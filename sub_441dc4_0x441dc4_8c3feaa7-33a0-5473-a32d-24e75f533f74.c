// ============================================================
// 函数名称: sub_441dc4
// 虚拟地址: 0x441dc4
// WARP GUID: 8c3feaa7-33a0-5473-a32d-24e75f533f74
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4419f4, sub_431bcc, sub_441388
// [被调用的父级函数]: sub_441834, sub_441890, sub_4418e0, sub_4422f4, sub_441bc0, sub_4416f8, sub_441878, sub_44173c, sub_4418a8, sub_4421a4
// ============================================================

void* __convention("regparm")sub_441dc4(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = arg1
    
    if (*(eax + 0x200) == 0)
        eax = sub_431bcc(arg1)
        
        if (eax.b != 0)
            int32_t __saved_ebp
            int32_t* var_c = &__saved_ebp
            int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            *(arg1 + 0x200) = 1
            char eax_5
            int32_t ecx_1
            eax_5, ecx_1 = sub_441388(*(arg1 + 0x1f4))
            
            if (eax_5 == 0)
                char eax_12
                int32_t ecx_3
                eax_12, ecx_3 = sub_441388(*(arg1 + 0x1f0))
                
                if (eax_12 == 0)
                    sub_4419f4(*(arg1 + 0x1f4))
                    int32_t edx_5
                    edx_5.b = 1
                    sub_4419f4(*(arg1 + 0x1f0))
                else
                    ecx_3.b = 1
                    sub_4419f4(*(arg1 + 0x1f4))
                    int32_t edx_3
                    edx_3.b = 1
                    sub_4419f4(*(arg1 + 0x1f0))
            else
                ecx_1.b = 1
                sub_4419f4(*(arg1 + 0x1f0))
                int32_t edx_1
                edx_1.b = 1
                sub_4419f4(*(arg1 + 0x1f4))
            
            fsbase->NtTib.ExceptionList = ExceptionList
            void* const var_c_1 = &data_441eb6
            *(arg1 + 0x200) = 0
            return arg1
    
    return eax
}

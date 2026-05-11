// ============================================================
// 函数名称: sub_4323e0
// 虚拟地址: 0x4323e0
// WARP GUID: 1d14ad06-5ce1-56b2-ae0f-c305645e56bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431bcc, sub_42e3a0, sub_42e7fc, sub_42e3a8, sub_42e838
// [被调用的父级函数]: sub_44c3e8
// ============================================================

int32_t* __convention("regparm")sub_4323e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    int32_t edx
    int32_t var_c = edx
    int32_t* ExceptionList = arg1
    
    if (sub_431bcc(ExceptionList).b != 0 && *(ExceptionList + 0x4b) != 5)
        if ((ExceptionList[8].b & 0x10) == 0)
        label_432434:
            (*(*ExceptionList + 0xa4))()
            (*(*ExceptionList + 0x40))()
            (*(*ExceptionList + 0x84))()
            sub_42e3a0(ExceptionList)
            int32_t __saved_ebp
            __return_addr = &__saved_ebp
            int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t esi_1 = sub_42e838(ExceptionList) - 1
            
            if (esi_1 s>= 0)
                int32_t i_1 = esi_1 + 1
                int32_t var_18_1 = 0
                int32_t i
                
                do
                    int32_t* eax_10 = sub_42e7fc(ExceptionList, var_18_1)
                    
                    if (*(eax_10 + 0x47) != 0)
                    label_4324a0:
                        int32_t* edx_2
                        edx_2.b = *(ExceptionList + 0x4b)
                        edx_2.b -= 3
                        eax_10[0xd]
                        eax_10[0xc]
                        (*(*eax_10 + 0x7c))(eax_10[0xf], eax_10[0xe])
                    else if ((eax_10[8].b & 0x10) != 0 && (*(eax_10 + 0x41) & 4) == 0)
                        goto label_4324a0
                    
                    var_18_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            __return_addr = sub_43250c
            int32_t* ExceptionList_1 = ExceptionList
            ExceptionList_1[0x11].w &= 0xffef
            return sub_42e3a8(ExceptionList)
        
        if (sub_42e838(ExceptionList) s> 0)
            goto label_432434
    
    int32_t* result
    result.b = 1
    return result
}

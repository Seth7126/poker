// ============================================================
// 函数名称: sub_4f8278
// 虚拟地址: 0x4f8278
// WARP GUID: ba0d0ee8-9442-5bf7-99bb-f5013c0eee16
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f8074, sub_4f80b4, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

int32_tsub_4f8278(void* arg1)
{
    // 第一条实际指令: (*data_5306b4)(0x40e00000, 0, 0, 0x3f800000)
    (*data_5306b4)(0x40e00000, 0, 0, 0x3f800000)
    (*data_5301d4)(0xbeb33333, 0xbdf5c28f, 0)
    *(arg1 - 0x30) = 0
    *(arg1 - 0x34) = 0xbe4ccccd
    int32_t eax_7 = *(*data_530304 + 0xdc0)
    int32_t var_8
    
    if (eax_7 == 1)
        var_8 = 0xa
    
    data_530304
    
    if (eax_7 == 2)
        var_8 = 0x10
    
    data_530304
    
    if (eax_7 == 3)
        var_8 = 0x16
    
    data_530304
    
    if (eax_7 == 4)
        var_8 = 0x1e
    
    data_530304
    
    if (eax_7 == 5)
        var_8 = 0x28
    
    int32_t result = var_8 - 1
    
    if (add_overflow(var_8, 0xffffffff))
        sub_403010()
        noreturn
    
    if (result s>= 0)
        int32_t i_1 = result + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            *(arg1 - 0x60) = fconvert.s(float.t(esi_1) / float.t(var_8) + fconvert.t(0f))
            
            if (add_overflow(esi_1, 1))
                sub_403010()
                noreturn
            
            *(arg1 - 0x64) = fconvert.s(float.t(esi_1 + 1) / float.t(var_8) - fconvert.t(0f))
            int32_t __saved_ebp
            float var_c_1 = fconvert.s(sub_4f80b4(0f, *(arg1 - 0x60), &__saved_ebp))
            float var_10_1 = fconvert.s(sub_4f80b4(1f, *(arg1 - 0x60), &__saved_ebp))
            float var_14_1 = fconvert.s(sub_4f80b4(0f, *(arg1 - 0x64), &__saved_ebp))
            float var_18_1 = fconvert.s(sub_4f80b4(1f, *(arg1 - 0x64), &__saved_ebp))
            *(arg1 - 0x68) =
                fconvert.s(fconvert.t(*(arg1 - 0x60)) * fconvert.t(*(arg1 - 0x2c)) * data_4f87d8)
            *(arg1 - 0x6c) =
                fconvert.s(fconvert.t(*(arg1 - 0x64)) * fconvert.t(*(arg1 - 0x2c)) * data_4f87d8)
            *(arg1 - 0x30) = 0
            *(arg1 - 0x34) = 0xbe19999a
            
            if (*(arg1 - 0x35) == 0)
                (*data_52ffd4)(6)
                (*data_5307f8)(
                    fconvert.s((fconvert.t(*(arg1 - 0x60)) + fconvert.t(*(arg1 - 0x64)))
                        / fconvert.t(2f) * float.t(*(arg1 - 0x3c))), 
                    fconvert.s(float.t(*(arg1 - 0x40)) * fconvert.t(0.5f)))
                long double st0_11 =
                    sub_4f8074(fconvert.s(fconvert.t(*(arg1 - 0x68)) + fconvert.t(*(arg1 - 0x6c))))
                (*data_530368)(
                    fconvert.s(
                        (fconvert.t(*(arg1 - 0x68)) + fconvert.t(*(arg1 - 0x6c))) / fconvert.t(2f)
                        + fconvert.t(*(arg1 - 0x30))), 
                    fconvert.s((fconvert.t(var_c_1) + fconvert.t(var_10_1) + fconvert.t(var_14_1)
                    + fconvert.t(var_18_1)) / fconvert.t(4f)), 
                    fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_11))
                (*data_5307f8)(
                    fconvert.s(float.t(*(arg1 - 0x3c)) * fconvert.t(*(arg1 - 0x60)) + fconvert.t(0f)), 
                    0)
                long double st0_12 = sub_4f8074(*(arg1 - 0x68))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x68))), 
                    var_c_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_12))
                (*data_5307f8)(
                    fconvert.s(float.t(*(arg1 - 0x3c)) * fconvert.t(*(arg1 - 0x60)) + fconvert.t(0f)), 
                    fconvert.s(float.t(*(arg1 - 0x40))))
                long double st0_13 = sub_4f8074(*(arg1 - 0x68))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x68))), 
                    var_10_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_13))
                (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * fconvert.t(*(arg1 - 0x64))), 
                    fconvert.s(float.t(*(arg1 - 0x40))))
                long double st0_14 = sub_4f8074(*(arg1 - 0x6c))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x6c))), 
                    var_18_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_14))
                (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * fconvert.t(*(arg1 - 0x64))), 0)
                long double st0_15 = sub_4f8074(*(arg1 - 0x6c))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x6c))), 
                    var_14_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_15))
                (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * fconvert.t(*(arg1 - 0x60))), 0)
                long double st0_16 = sub_4f8074(*(arg1 - 0x68))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x68))), 
                    var_c_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_16))
                result = (*data_530a08)()
            else
                (*data_52ffd4)(6)
                long double st0_5 =
                    sub_4f8074(fconvert.s(fconvert.t(*(arg1 - 0x68)) + fconvert.t(*(arg1 - 0x6c))))
                (*data_530368)(
                    fconvert.s(
                        (fconvert.t(*(arg1 - 0x68)) + fconvert.t(*(arg1 - 0x6c))) / fconvert.t(2f)
                        + fconvert.t(*(arg1 - 0x30))), 
                    fconvert.s((fconvert.t(var_c_1) + fconvert.t(var_10_1) + fconvert.t(var_14_1)
                    + fconvert.t(var_18_1)) / fconvert.t(4f)), 
                    fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_5))
                long double st0_6 = sub_4f8074(*(arg1 - 0x68))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x68))), 
                    var_c_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_6))
                long double st0_7 = sub_4f8074(*(arg1 - 0x68))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x68))), 
                    var_10_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_7))
                long double st0_8 = sub_4f8074(*(arg1 - 0x6c))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x6c))), 
                    var_18_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_8))
                long double st0_9 = sub_4f8074(*(arg1 - 0x6c))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x6c))), 
                    var_14_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_9))
                long double st0_10 = sub_4f8074(*(arg1 - 0x68))
                (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x68))), 
                    var_c_1, fconvert.s(fconvert.t(*(arg1 - 0x24)) - st0_10))
                result = (*data_530a08)()
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}

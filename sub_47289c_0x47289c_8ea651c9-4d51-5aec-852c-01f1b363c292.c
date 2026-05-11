// ============================================================
// 函数名称: sub_47289c
// 虚拟地址: 0x47289c
// WARP GUID: 8ea651c9-4d51-5aec-852c-01f1b363c292
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_4471a4, sub_447198, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_471144, sub_473878, sub_473938, sub_47013c
// ============================================================

int32_t __convention("regparm")sub_47289c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    *data_530a18
    
    if (sub_447198() s< var_c)
        *data_530a18
        var_c = sub_447198()
    
    int32_t edi = var_c
    int32_t esi = arg2
    
    if (*(arg1 + 0x213) == 0 && *(*(arg1 + 0xa20) + 4) == 0)
        *data_530a18
        
        if (sub_4471a4() s> arg2)
            edi = var_c
            long double x87_r7_2 = float.t(edi) / float.t(arg2)
            long double temp0_1 = fconvert.t(0.75f)
            x87_r7_2 - temp0_1
            int32_t eax_9
            eax_9.w = (x87_r7_2 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_9:1.b, 6)))
                bool o_1 = unimplemented  {imul eax, edi, 0x4}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                int32_t eax_11
                int32_t edx
                eax_11, edx = sub_402b4c(float.t(edi * 4) / fconvert.t(3f))
                
                if (eax_11 s>> 0x1f != edx)
                    sub_403008()
                    noreturn
                
                esi = eax_11
    
    void* eax_14
    eax_14.b = *(*(arg1 + 0xa20) + 4)
    
    if (eax_14.b != 0)
        *(arg1 + 0x89c) = eax_14.b
    
    *(arg1 + 0x898) = edi
    *(arg1 + 0x894) = esi
    void* eax_15
    eax_15.b = *(*(arg1 + 0xa20) + 4)
    eax_15.b ^= 1
    *(arg1 + 0x89c) = eax_15.b
    data_5320bc = fconvert.d(float.t(esi) / float.t(edi))
    __builtin_strncpy(&data_5320bc, "UUUU", 4)
    data_5320bc:4 = 0x3ff55555
    int32_t var_14 = 0
    *(arg1 + 0x1350) = 0
    
    if (*(*(arg1 + 0xa20) + 4) != 0)
        long double x87_r7_8 = float.t(esi) / float.t(edi)
        long double x87_r6_4 = data_472b18
        x87_r6_4 - x87_r7_8
        void* eax_16
        eax_16.w = (x87_r6_4 < x87_r7_8 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_8 ? 1 : 0) << 0xe
        
        if (test_bit(eax_16:1.b, 0))
            int32_t eax_17
            int32_t edx_1
            eax_17, edx_1 =
                sub_402b4c((float.t(esi) - float.t(esi) * data_472b24 / data_472b30) / fconvert.t(2f))
            
            if (eax_17 s>> 0x1f != edx_1)
                sub_403008()
                noreturn
            
            var_14 = eax_17
            *(arg1 + 0x1350) = var_14
            int32_t eax_21
            int32_t edx_2
            eax_21, edx_2 = sub_402b4c(float.t(esi) * data_472b24 / data_472b30)
            
            if (eax_21 s>> 0x1f != edx_2)
                sub_403008()
                noreturn
            
            esi = eax_21
            *(arg1 + 0x894) = esi
    
    (*data_52fed8)(var_14, 0, esi, edi)
    data_5320c8 = var_14
    data_5320cc = 0
    int32_t eax_28
    int32_t edx_3
    eax_28, edx_3 = sub_402b4c(float.t(esi))
    
    if (eax_28 s>> 0x1f != edx_3)
        sub_403008()
        noreturn
    
    data_5320d0 = eax_28
    int32_t eax_31
    int32_t edx_4
    eax_31, edx_4 = sub_402b4c(float.t(edi))
    
    if (eax_31 s>> 0x1f != edx_4)
        sub_403008()
        noreturn
    
    data_5320d4 = eax_31
    (*data_530994)(0x1701)
    (*data_530810)()
    (*data_530694)(fconvert.d(float.t(data_5320d8) / fconvert.t(4f) * fconvert.t(3f)), data_5320bc.d, 
        data_5320bc:4, 0, 0x3ff00000, 0, 0x40490000)
    return (*data_530994)(0x1700)
}

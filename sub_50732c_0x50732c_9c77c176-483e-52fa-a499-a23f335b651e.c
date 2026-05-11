// ============================================================
// 函数名称: sub_50732c
// 虚拟地址: 0x50732c
// WARP GUID: 9c77c176-483e-52fa-a499-a23f335b651e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_47ab08, sub_50c5e0, sub_5072b8, sub_5166d8, sub_44cde0, sub_47a7ec, sub_4836b0, sub_50d2f4, sub_40401c, sub_50e368, sub_402bdc, sub_46910c, sub_47a140, sub_516544, sub_403e1c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_50732c(char arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_11c = ebx
    int32_t var_118 = 0
    int32_t var_114 = 0
    int32_t var_110 = 0
    int32_t var_10c[0x42]
    var_10c[0] = 0
    int32_t* var_120 = &var_4
    int32_t (* var_124)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD* var_12c = nullptr
        *data_530988
        *data_530304
        ebp_1 = sub_47a7ec(*data_5300f4, &var_10c, var_12c.b)
        sub_404054(&ebp_1[-0x41], ebp_1[-0x42], 0xff)
        sub_402bdc(*data_530454 + 0x10, &ebp_1[-0x41], 0x20)
        *data_530454
        long double x87_r0
        
        if (sub_50d2f4() == 0)
            var_12c = nullptr
            sub_47a140(*data_5309e4, *data_530438, *data_530304, var_12c.b)
            esp = &ExceptionList
            
            if (sub_5166d8(*data_530454, 1, 0) == 0)
                sub_44cde0()
            else
                int32_t ecx_11 = sub_50c5e0(1, 1)
                *(*data_530454 + 0x1b4) = 0
                *(*data_530454 + 0x1c8) = 0
                sub_5072b8(ecx_11)
                sub_40401c(sub_4836b0(*data_530304, *data_530438), *data_530454 + 0x10)
                var_12c = ebp_1[-0x45]
                sub_47ab08(*data_530304, *data_530438, 1, x87_r0, var_12c)
                esp = &ExceptionList
        else
            *(*data_530454 + 4) = 0xffffffff
            var_12c = nullptr
            esp = &var_12c
            
            if (sub_516544(*data_530454, *(*data_530084 + 0x40), *(*data_530084 + 0x38), var_12c.b)
                    == 0)
                sub_44cde0()
            else
                ebp_1 = sub_46910c(*data_530304, "f_einleiten", &ebp_1[-0x43])
                sub_50e368(*data_530084, 0, ebp_1[-0x43])
                int32_t ecx_7 = sub_50c5e0(1, 1)
                *(*data_530454 + 0x1b4) = 0
                *(*data_530454 + 0x1c8) = 0
                sub_40401c(ecx_7, *data_530454 + 0x10)
                esp = &var_12c
                sub_5072b8(sub_47ab08(*data_530304, *data_530438, 1, x87_r0, ebp_1[-0x44]))
                
                if (*(*data_530454 + 0x345) != 0)
                    sub_4836b0(*data_530304, *data_530438)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_5075a7
    return sub_403e1c(&ebp_1[-0x45], 4)
}

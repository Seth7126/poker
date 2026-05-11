// ============================================================
// 函数名称: sub_49be64
// 虚拟地址: 0x49be64
// WARP GUID: cfa08d52-9935-561c-9a4f-86673a390acb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_410524, sub_403df8, sub_40b4b0, sub_403010
// [被调用的父级函数]: sub_49bf10
// ============================================================

char** __convention("regparm")sub_49be64(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char* var_10 = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        if (arg1[2] s> 0x40)
            sub_405ae8(data_52fff4, &var_10)
            int32_t edx_1
            edx_1.b = 1
            sub_40b4b0(sub_49aac0+0x26c, edx_1, var_10)
            sub_403828()
            noreturn
        
        int32_t i_2 = arg1[2]
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t var_c_1 = 0
            int32_t* ebx_2 = &arg2[1]
            int32_t i
            
            do
                *ebx_2 = sub_410524(arg1, var_c_1)
                var_c_1 += 1
                ebx_2 = &ebx_2[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *arg2 = arg1[2]
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_49bf09
    char** result = &var_10
    sub_403df8(result)
    return result
}

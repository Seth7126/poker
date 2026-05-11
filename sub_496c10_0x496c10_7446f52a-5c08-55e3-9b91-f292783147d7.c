// ============================================================
// 函数名称: sub_496c10
// 虚拟地址: 0x496c10
// WARP GUID: 7446f52a-5c08-55e3-9b91-f292783147d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_494050, sub_494048, sub_496eb0, sub_410524
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_496c10(void* arg1, BOOL arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t var_10 = 0
    sub_494048(*(arg1 + 0x68))
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_2 = *(*(arg1 + 0x64) + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            if (*(sub_410524(*(arg1 + 0x64), ebx_1) + 0x30) == 0)
                sub_496eb0(sub_410524(*(arg1 + 0x64), ebx_1), arg2)
                break
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_496ca1
    return sub_494050(*(arg1 + 0x68))
}

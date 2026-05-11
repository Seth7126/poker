// ============================================================
// 函数名称: sub_4116c8
// 虚拟地址: 0x4116c8
// WARP GUID: 467d2a99-bbc4-55ed-b5cc-1d1dae46309a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_403e1c
// [被调用的父级函数]: sub_411610
// ============================================================

int32_t __convention("regparm")sub_4116c8(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_14 = nullptr
    void* var_18 = nullptr
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_d = 0
    int32_t i_2 = (*(*arg1 + 0x14))(ExceptionList, var_2c, var_28)
    
    if (i_2 == (*(*arg2 + 0x14))(arg1))
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t ebx_2 = 0
            bool cond:0_1 = false
            int32_t i
            
            do
                (*(*arg1 + 0xc))()
                (*(*var_14 + 0xc))(var_14)
                sub_404188(var_14, var_18)
                
                if (cond:0_1)
                    goto label_411747
                
                ebx_2 += 1
                i = i_1
                i_1 -= 1
                cond:0_1 = i != 1
            while (i != 1)
        
        char var_d_1 = 1
    
    label_411747:
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_411764
    return sub_403e1c(&var_18, 2)
}

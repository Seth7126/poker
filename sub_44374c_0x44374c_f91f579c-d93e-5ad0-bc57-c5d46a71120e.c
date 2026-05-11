// ============================================================
// 函数名称: sub_44374c
// 虚拟地址: 0x44374c
// WARP GUID: f91f579c-d93e-5ad0-bc57-c5d46a71120e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FillRect
// [内部子函数调用]: sub_44370c, sub_4436c0, sub_4190f0, sub_440884, sub_443aa4
// [被调用的父级函数]: sub_4445ed
// ============================================================

int32_t* __convention("regparm")sub_44374c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t eax_1 = *arg2
    int32_t* result
    
    if (eax_1 == 0x14)
        int32_t eax_7
        eax_7, ebp_1 = sub_4190f0(arg1[0x4c])
        (*(*ebp_1[-1] + 0x40))(eax_7)
        FillRect(*(ebp_1[-2] + 4), &ebp_1[-6])
        result = ebp_1[-2]
        result[3] = 1
    else if (eax_1 == 0x3f)
        sub_4436c0(&var_4)
        result = arg1
        
        if (*(result + 0x217) == 2)
            int32_t eax_13 = sub_443aa4(arg1)
            char eax_14
            
            if (eax_13 != 0)
                eax_14 = sub_44370c(&var_4)
            
            char edx_1
            
            if (eax_13 == 0 || eax_14 == 0)
                edx_1 = 1
            else
                edx_1 = 0
            
            result = sub_440884(arg1[0x8f], edx_1)
    else if (eax_1 != 0x84)
        result = sub_4436c0(&var_4)
    else
        sub_4436c0(&var_4)
        result = arg2
        
        if (result[3] == 1)
            result = arg2
            result[3] = 0xffffffff
    
    *ebp_1
    return result
}

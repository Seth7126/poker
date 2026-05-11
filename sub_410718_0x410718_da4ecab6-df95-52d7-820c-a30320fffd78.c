// ============================================================
// 函数名称: sub_410718
// 虚拟地址: 0x410718
// WARP GUID: da4ecab6-df95-52d7-820c-a30320fffd78
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00, sub_4104b0, sub_410414, sub_4106dc
// [被调用的父级函数]: sub_42db2c, sub_4103fc
// ============================================================

int32_t __convention("regparm")sub_410718(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< 0 || arg2 s> 0x7ffffff)
    if (arg2 s< 0 || arg2 s> 0x7ffffff)
        *arg1
        sub_4104b0(arg2, data_5303c8)
        noreturn
    
    if (arg2 s> arg1[3])
        sub_4106dc(arg1, arg2)
    
    int32_t result = arg1[2]
    
    if (arg2 s<= result)
        int32_t ebp_2 = result - 1
        
        if (arg2 s<= ebp_2)
            int32_t i_1 = arg2 - ebp_2 - 1
            int32_t i
            
            do
                result = sub_410414(arg1, ebp_2)
                ebp_2 -= 1
                i = i_1
                i_1 += 1
            while (i != 0xffffffff)
    else
        result = sub_402d00(arg1[1] + (result << 2), (arg2 - result) << 2, 0)
    
    arg1[2] = arg2
    return result
}

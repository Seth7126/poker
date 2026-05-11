// ============================================================
// 函数名称: sub_40bd4c
// 虚拟地址: 0x40bd4c
// WARP GUID: ab414b79-c730-5000-b488-eefa381d21b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40bdc4, sub_40bde8
// ============================================================

int32_t __convention("regparm")sub_40bd4c(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 != 0 && arg1[arg2] != 0)
        if (arg2 != 0)
            int32_t i
            
            for (i = arg2 - 1; i s>= 0; i -= 1)
                int32_t ecx
                ecx.b = arg1[i]
                
                if (not(test_bit(data_52e118, ecx & 0xff)))
                    break
            
            int32_t ecx_3 = (arg2 - i) & 0x80000001
            
            if (ecx_3 s< 0)
                ecx_3 = ((ecx_3 - 1) | 0xfffffffe) + 1
            
            if (ecx_3 != 0)
                arg1.b = arg1[arg2]
                
                if (test_bit(data_52e118, arg1 & 0xff))
                    result.b = 1
            else
                result.b = 2
        else
            arg1.b = *arg1
            
            if (test_bit(data_52e118, arg1 & 0xff))
                result.b = 1
    
    return result
}

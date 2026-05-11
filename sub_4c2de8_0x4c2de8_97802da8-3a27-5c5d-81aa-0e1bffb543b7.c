// ============================================================
// 函数名称: sub_4c2de8
// 虚拟地址: 0x4c2de8
// WARP GUID: 97802da8-3a27-5c5d-81aa-0e1bffb543b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2d7c, sub_512d1c, sub_4c0924, sub_403010
// [被调用的父级函数]: sub_4b7000, sub_4d3e30, sub_4babf8, sub_4c10a0, sub_4b9e84, sub_4b77e0, sub_4c96bc, sub_4c08f8, sub_520efc, sub_4b7068, sub_4c27e4, sub_4c62e8, sub_4c5c10, sub_4dad04, sub_4c5d6c, sub_50907c, sub_4c2f80
// ============================================================

int32_t __convention("regparm")sub_4c2de8(char arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8:3.b = arg1
    int32_t result = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
                
                if (var_8:3.b != 0 && sub_4c0924() != 0 && sub_512d1c(*data_530454, ebx_1, 0) != 0)
                    int32_t result_2 = result
                    result -= 1
                    
                    if (add_overflow(result_2, 0xffffffff))
                        sub_403010()
                        noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}

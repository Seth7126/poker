// ============================================================
// 函数名称: sub_40be28
// 虚拟地址: 0x40be28
// WARP GUID: 0907f362-fdb0-53d7-b2f9-e43352b340e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078
// [被调用的父级函数]: sub_40be00
// ============================================================

int32_t __convention("regparm")sub_40be28(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result_1 = arg2
    int32_t result_1 = arg2
    int32_t result = 0
    
    if (result_1 s> 0 && result_1 s<= sub_404078(arg1))
        result = result_1
        
        if (data_5315bc != 0)
            int32_t eax_2 = 1
            result = 0
            
            if (result_1 s>= 1)
                do
                    arg2.b = *(arg1 + eax_2 - 1)
                    
                    if (test_bit(data_52e118, arg2 & 0xff))
                        eax_2 += 1
                    
                    eax_2 += 1
                    result += 1
                while (result_1 s>= eax_2)
    
    return result
}

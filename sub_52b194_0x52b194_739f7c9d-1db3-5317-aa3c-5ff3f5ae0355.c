// ============================================================
// 函数名称: sub_52b194
// 虚拟地址: 0x52b194
// WARP GUID: 739f7c9d-1db3-5317-aa3c-5ff3f5ae0355
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5182d8, sub_4c1e5c
// [被调用的父级函数]: sub_4cd114
// ============================================================

void* __convention("regparm")sub_52b194(char* arg1)
{
    // 第一条实际指令: void* result = *data_5301f4
    void* result = *data_5301f4
    
    if (*(result + 4) == 7)
        result = sub_4c1e5c()
        
        if (result.b != 0 && *(arg1 + 0x100) s> 0)
            while (*arg1 == 8)
                int32_t i_1
                i_1.b = 9
                result = sub_5182d8(arg1, i_1.b)
                
                if (result.b == 0)
                    break
                
                result = sub_5182d8(arg1, 0xa)
                
                if (result.b == 0)
                    break
                
                result = sub_5182d8(arg1, 0xb)
                
                if (result.b == 0)
                    break
                
                result = sub_5182d8(arg1, 0xc)
                
                if (result.b == 0)
                    break
                
                result = sx.d(*(arg1 + 0x100))
                *(arg1 + (result << 2)) = *arg1
                i_1 = sx.d(*(arg1 + 0x100))
                
                if (i_1 s> 0)
                    result = &arg1[4]
                    int32_t i
                    
                    do
                        *(result - 4) = *result
                        result += 4
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
    
    return result
}

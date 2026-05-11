// ============================================================
// 函数名称: sub_43e290
// 虚拟地址: 0x43e290
// WARP GUID: 436c6cb7-9572-56c9-9477-aa74a8f2ad08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403fa0, sub_403df8, sub_404078
// [被调用的父级函数]: sub_43c480, sub_43d43c, sub_440e70
// ============================================================

int32_t* __convention("regparm")sub_43e290(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403df8(arg2)
    sub_403df8(arg2)
    int32_t ebx = 1
    int32_t* result = sub_404078(arg1)
    int32_t* result_1 = result
    
    if (result_1 s>= 1)
        do
            result = data_530a44
            int32_t edx
            edx.b = *(arg1 + ebx - 1)
            
            if (test_bit(*result, edx & 0xff))
                ebx += 1
            else if (*(arg1 + ebx - 1) == 0x26)
                void* eax_3 = result_1 - ebx
                result = eax_3 - 1
                
                if (eax_3 s>= 1)
                    ebx += 1
                    
                    if (*(arg1 + ebx - 1) != 0x26)
                        result = arg2
                        edx.b = *(arg1 + ebx - 1)
                        sub_403fa0()
            
            ebx += 1
        while (result_1 s>= ebx)
    
    return result
}

// ============================================================
// 函数名称: sub_416044
// 虚拟地址: 0x416044
// WARP GUID: d2b527d7-f2fb-5007-9d59-92915460401f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_416028
// [被调用的父级函数]: sub_43c1b4, sub_43d39c, sub_4a7ff0, sub_4a9554, sub_42ad4c, sub_4a5a44, sub_436764
// ============================================================

void* __convention("regparm")sub_416044(void* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: if (arg3 == 1 && arg2 != 0)
    if (arg3 == 1 && arg2 != 0)
        sub_416028(arg1, arg2)
    
    void* result = *(arg1 + 0x10)
    
    if (result != 0)
        int32_t ebx_2 = *(result + 8) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                result = (*(*sub_410524(*(arg1 + 0x10), edi_1) + 0x10))(arg2, arg3)
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}

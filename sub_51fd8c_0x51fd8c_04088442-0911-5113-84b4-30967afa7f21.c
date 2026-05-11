// ============================================================
// 函数名称: sub_51fd8c
// 虚拟地址: 0x51fd8c
// WARP GUID: 04088442-0911-5113-84b4-30967afa7f21
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c4c9c, sub_403df8, sub_4c0924
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t* __convention("regparm")sub_51fd8c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = arg2
    int32_t* result = arg2
    sub_403df8(result)
    
    if (*(arg1 + 4) == 7)
        result = sub_4c0924()
        
        if (result.b == 0)
            result = *data_530454
            
            if (*(result + 0x1e3) == 0)
                return sub_4c4c9c(arg2)
    
    return result
}

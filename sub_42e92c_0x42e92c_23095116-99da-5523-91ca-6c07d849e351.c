// ============================================================
// 函数名称: sub_42e92c
// 虚拟地址: 0x42e92c
// WARP GUID: 23095116-99da-5523-91ca-6c07d849e351
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42bd90, sub_42bdc0, sub_4032ac
// [被调用的父级函数]: sub_432ad8, sub_4443dc, sub_443850, sub_42e994
// ============================================================

int32_t __convention("regparm")sub_42e92c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_42bd90(arg1) != 0)
    if (sub_42bd90(arg1) != 0)
        *arg2 |= 0x2000
    
    if (sub_42bdc0(arg1) != 0)
        *arg2 |= 0x4000
    
    int32_t ebx
    ebx.w = 0xffce
    char result = sub_4032ac(arg1)
    
    if (result != 0)
        ebx.w = 0xffcf
        result = sub_4032ac(arg1)
        
        if (result != 0)
            ebx.w = 0xffcf
            result = sub_4032ac(arg1)
            
            if (result == 1)
                *arg2 = *arg2
        else
            *arg2 |= 0x1000
    
    return result
}

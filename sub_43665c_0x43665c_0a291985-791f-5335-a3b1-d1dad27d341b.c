// ============================================================
// 函数名称: sub_43665c
// 虚拟地址: 0x43665c
// WARP GUID: 0a291985-791f-5335-a3b1-d1dad27d341b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_41060c, sub_415d64, sub_403430
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43665c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_4030d0(arg1[0xa])
    
    while (true)
        int32_t* esi_1 = arg1[9]
        
        if (esi_1[2] s<= 0)
            break
        
        sub_4030d0(sub_41060c(esi_1))
    
    sub_4030d0(arg1[9])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_415d64(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}

// ============================================================
// 函数名称: sub_49b404
// 虚拟地址: 0x49b404
// WARP GUID: 51a98b84-1d14-5fcb-9be8-26e5213cd3aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ed4
// [被调用的父级函数]: sub_49b454
// ============================================================

int32_t __fastcallsub_49b404(int32_t arg1, char** arg2)
{
    // 第一条实际指令: char* eax
    char* eax
    int32_t result
    int32_t edx
    eax, result, edx = sub_408ed4(0xffffffff, 0xffffffff)
    
    if (edx == 0xffffffff)
        if (eax u> 0xffffffff)
            goto label_49b42c
        
        result = 0
    else if (edx s<= 0xffffffff)
        result = 0
    else
    label_49b42c:
        
        if (edx != 1)
            if (edx s< 1)
                result.b = 1
            else
                result = 0
        else if (eax u< 0)
            result.b = 1
        else
            result = 0
    
    if (result.b != 0)
        *arg2 = eax
    
    return result
}

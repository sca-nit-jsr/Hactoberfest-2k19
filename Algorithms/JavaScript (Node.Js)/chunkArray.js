chunkArray(list, howMany) {
      var idx = 0
      var result = []

      while (idx < list.length) {
        if (idx % howMany === 0) result.push([])
        result[result.length - 1].push(list[idx++])
      }
      
      return result
}